/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "pdvsa.h"

bool_t
xdr_ticket (XDR *xdrs, ticket *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->numero))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->ip_centro))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->hora))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_reto (XDR *xdrs, reto *objp)
{
	register int32_t *buf;

	 if (!xdr_pointer (xdrs, (char **)&objp->respuesta, sizeof (u_int), (xdrproc_t) xdr_u_int))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->reto))
		 return FALSE;
	return TRUE;
}
