/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "calculatrice.h"

bool_t
xdr_variable (XDR *xdrs, variable *objp)
{
	register int32_t *buf;

	 if (!xdr_double (xdrs, &objp->a))
		 return FALSE;
	 if (!xdr_double (xdrs, &objp->b))
		 return FALSE;
	return TRUE;
}
