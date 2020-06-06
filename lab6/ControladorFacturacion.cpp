DtFacturaLocal facturar(idMesa int, descuento float){
    ManejadorMesa* mM = ManejadorMesa::getInstancia();
    mM->getMesa(idMesa);
    VentaLocal* v = me->getVentaLocal();
    Set(DtProducto) dtproductos = v->getDtProductosFactura();
    float subtotal = v->getSubTotalVenta();
    Factura* f = new Factura(subtotal,dtProductos,descuento);
    //codVenta=autogenerado,fechaEmision=actual
    v->setFactura(f);
    string nomMozo = v->getNombreMozo();
    string cod = f->getCodVenta();
    DtFechaHora fh = f->getFechaHora();
    DtFacturaLocal dtf =
    DtFacturaLocal(cod,fh,descuento,dtproductos,subtotal,subtotal*(1-descuento),subtotal*(1-descuento)*1.22,nomMozo);
    return dtf;
}
