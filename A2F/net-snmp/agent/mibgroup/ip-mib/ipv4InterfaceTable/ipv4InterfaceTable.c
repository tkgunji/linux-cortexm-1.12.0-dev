/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.48 $ of : mfd-top.m2c,v $ 
 *
 * $Id$
 */
/** \page MFD helper for ipv4InterfaceTable
 *
 * \section intro Introduction
 * Introductory text.
 *
 */
/*
 * standard Net-SNMP includes 
 */
#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>

/*
 * include our parent header 
 */
#include "ipv4InterfaceTable.h"

#include <net-snmp/agent/mib_modules.h>

#include "ipv4InterfaceTable_interface.h"

const oid       ipv4InterfaceTable_oid[] = { IPV4INTERFACETABLE_OID };
const int       ipv4InterfaceTable_oid_size =
OID_LENGTH(ipv4InterfaceTable_oid);

ipv4InterfaceTable_registration ipv4InterfaceTable_user_context;

void            initialize_table_ipv4InterfaceTable(void);
void            shutdown_table_ipv4InterfaceTable(void);


/**
 * Initializes the ipv4InterfaceTable module
 */
void
init_ipv4InterfaceTable(void)
{
    DEBUGMSGTL(("verbose:ipv4InterfaceTable:init_ipv4InterfaceTable",
                "called\n"));

    /*
     * TODO:300:o: Perform ipv4InterfaceTable one-time module initialization.
     */

    /*
     * we depend on the ifTable, so we put our init in with it
     * to guarantee order of execution.
     */
    init_ifTable();

    /*
     * last changed should be 0 at startup
     */
    ipv4InterfaceTable_lastChange_set(0);

}                               /* init_ipv4InterfaceTable */

/**
 * Shut-down the ipv4InterfaceTable module (agent is exiting)
 */
void
shutdown_ipv4InterfaceTable(void)
{
    if (should_init("ipv4InterfaceTable"))
        shutdown_table_ipv4InterfaceTable();

}

/**
 * Initialize the table ipv4InterfaceTable 
 *    (Define its contents and how it's structured)
 */
void
initialize_table_ipv4InterfaceTable(void)
{
    ipv4InterfaceTable_registration *user_context;
    u_long          flags;

    DEBUGMSGTL(("verbose:ipv4InterfaceTable:initialize_table_ipv4InterfaceTable", "called\n"));

    /*
     * TODO:301:o: Perform ipv4InterfaceTable one-time table initialization.
     */

    /*
     * TODO:302:o: |->Initialize ipv4InterfaceTable user context
     * if you'd like to pass in a pointer to some data for this
     * table, allocate or set it up here.
     */
    /*
     * a netsnmp_data_list is a simple way to store void pointers. A simple
     * string token is used to add, find or remove pointers.
     */
    user_context =
        netsnmp_create_data_list("ipv4InterfaceTable", NULL, NULL);

    /*
     * No support for any flags yet, but in the future you would
     * set any flags here.
     */
    flags = 0;

    /*
     * call interface initialization code
     */
    _ipv4InterfaceTable_initialize_interface(user_context, flags);
}                               /* initialize_table_ipv4InterfaceTable */

/**
 * Shutdown the table ipv4InterfaceTable 
 */
void
shutdown_table_ipv4InterfaceTable(void)
{
    /*
     * call interface shutdown code
     */
    _ipv4InterfaceTable_shutdown_interface
        (&ipv4InterfaceTable_user_context);
}

/**
 * extra context initialization (eg default values)
 *
 * @param rowreq_ctx    : row request context
 * @param user_init_ctx : void pointer for user (parameter to rowreq_ctx_allocate)
 *
 * @retval MFD_SUCCESS  : no errors
 * @retval MFD_ERROR    : error (context allocate will fail)
 */
int
ipv4InterfaceTable_rowreq_ctx_init(ipv4InterfaceTable_rowreq_ctx *
                                   rowreq_ctx, void *user_init_ctx)
{
    DEBUGMSGTL(("verbose:ipv4InterfaceTable:ipv4InterfaceTable_rowreq_ctx_init", "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:210:o: |-> Perform extra ipv4InterfaceTable rowreq initialization. (eg DEFVALS)
     */
    rowreq_ctx->data.ipv4InterfaceRetransmitTime = 1000;


    return MFD_SUCCESS;
}                               /* ipv4InterfaceTable_rowreq_ctx_init */

/**
 * extra context cleanup
 * @param rowreq_ctx
 *
 */
void
ipv4InterfaceTable_rowreq_ctx_cleanup(ipv4InterfaceTable_rowreq_ctx *
                                      rowreq_ctx)
{
    DEBUGMSGTL(("verbose:ipv4InterfaceTable:ipv4InterfaceTable_rowreq_ctx_cleanup", "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:211:o: |-> Perform extra ipv4InterfaceTable rowreq cleanup.
     */
}                               /* ipv4InterfaceTable_rowreq_ctx_cleanup */

/**
 * pre-request callback
 *
 * @param user_context
 *
 * @retval MFD_SUCCESS              : success.
 * @retval MFD_ERROR                : other error
 */
int
ipv4InterfaceTable_pre_request(ipv4InterfaceTable_registration *
                               user_context)
{
    DEBUGMSGTL(("verbose:ipv4InterfaceTable:ipv4InterfaceTable_pre_request", "called\n"));

    /*
     * TODO:510:o: Perform ipv4InterfaceTable pre-request actions.
     */

    return MFD_SUCCESS;
}                               /* ipv4InterfaceTable_pre_request */

/**
 * post-request callback
 *
 * Note:
 *   New rows have been inserted into the container, and
 *   deleted rows have been removed from the container and
 *   released.
 *
 * @param user_context
 * @param rc : MFD_SUCCESS if all requests succeeded
 *
 * @retval MFD_SUCCESS : success.
 * @retval MFD_ERROR   : other error (ignored)
 */
int
ipv4InterfaceTable_post_request(ipv4InterfaceTable_registration *
                                user_context, int rc)
{
    DEBUGMSGTL(("verbose:ipv4InterfaceTable:ipv4InterfaceTable_post_request", "called\n"));

    /*
     * TODO:511:o: Perform ipv4InterfaceTable post-request actions.
     */

    /*
     * check to set if any rows were changed.
     */
    if (ipv4InterfaceTable_dirty_get()) {
        /*
         * check if request was successful. If so, this would be
         * a good place to save data to its persistent store.
         */
        if (MFD_SUCCESS == rc) {
            /*
             * save changed rows, if you haven't already
             */
        }

        ipv4InterfaceTable_dirty_set(0);        /* clear table dirty flag */
    }

    return MFD_SUCCESS;
}                               /* ipv4InterfaceTable_post_request */


/**********************************************************************
 **********************************************************************
 ***
 *** Table ipv4InterfaceTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * IP-MIB::ipv4InterfaceTable is subid 28 of ip.
 * Its status is Current.
 * OID: .1.3.6.1.2.1.4.28, length: 8
 */

/*
 * ---------------------------------------------------------------------
 * * TODO:200:r: Implement ipv4InterfaceTable data context functions.
 */


/*---------------------------------------------------------------------
 * IP-MIB::ipv4InterfaceEntry.ipv4InterfaceReasmMaxSize
 * ipv4InterfaceReasmMaxSize is subid 2 of ipv4InterfaceEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.2.1.4.28.1.2
 * Description:
The size of the largest IPv4 datagram which this entity can
            re-assemble from incoming IPv4 fragmented datagrams received
            on this interface.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 1      hashint   0
 *   settable   0
 *
 * Ranges:  0 - 65535;
 *
 * Its syntax is INTEGER32 (based on perltype INTEGER32)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (long)
 */
/**
 * Extract the current value of the ipv4InterfaceReasmMaxSize data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param ipv4InterfaceReasmMaxSize_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
ipv4InterfaceReasmMaxSize_get(ipv4InterfaceTable_rowreq_ctx * rowreq_ctx,
                              long *ipv4InterfaceReasmMaxSize_val_ptr)
{
   /** we should have a non-NULL pointer */
    netsnmp_assert(NULL != ipv4InterfaceReasmMaxSize_val_ptr);


    DEBUGMSGTL(("verbose:ipv4InterfaceTable:ipv4InterfaceReasmMaxSize_get",
                "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    if (!
        (rowreq_ctx->data.ifentry->
         ns_flags & NETSNMP_INTERFACE_FLAGS_HAS_V4_REASMMAX))
        return MFD_SKIP;

    /*
     * TODO:231:o: |-> Extract the current value of the ipv4InterfaceReasmMaxSize data.
     * copy (* ipv4InterfaceReasmMaxSize_val_ptr ) from rowreq_ctx->data
     */
    (*ipv4InterfaceReasmMaxSize_val_ptr) =
        rowreq_ctx->data.ipv4InterfaceReasmMaxSize;

    return MFD_SUCCESS;
}                               /* ipv4InterfaceReasmMaxSize_get */

/*---------------------------------------------------------------------
 * IP-MIB::ipv4InterfaceEntry.ipv4InterfaceEnableStatus
 * ipv4InterfaceEnableStatus is subid 3 of ipv4InterfaceEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.2.1.4.28.1.3
 * Description:
The indication of whether IPv4 is enabled (up) or disabled
            (down) on this interface.  This object does not affect the
            state of the interface itself, only its connection to an
            IPv4 stack.  The IF-MIB should be used to control the state
            of the interface.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  1      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 * Enum range: 1/8. Values:  up(1), down(2)
 *
 * Its syntax is INTEGER (based on perltype INTEGER)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (u_long)
 */
/**
 * Extract the current value of the ipv4InterfaceEnableStatus data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param ipv4InterfaceEnableStatus_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
ipv4InterfaceEnableStatus_get(ipv4InterfaceTable_rowreq_ctx * rowreq_ctx,
                              u_long * ipv4InterfaceEnableStatus_val_ptr)
{
   /** we should have a non-NULL pointer */
    netsnmp_assert(NULL != ipv4InterfaceEnableStatus_val_ptr);


    DEBUGMSGTL(("verbose:ipv4InterfaceTable:ipv4InterfaceEnableStatus_get",
                "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:231:o: |-> Extract the current value of the ipv4InterfaceEnableStatus data.
     * copy (* ipv4InterfaceEnableStatus_val_ptr ) from rowreq_ctx->data
     */
    (*ipv4InterfaceEnableStatus_val_ptr) =
        rowreq_ctx->data.ipv4InterfaceEnableStatus;

    return MFD_SUCCESS;
}                               /* ipv4InterfaceEnableStatus_get */

/*---------------------------------------------------------------------
 * IP-MIB::ipv4InterfaceEntry.ipv4InterfaceRetransmitTime
 * ipv4InterfaceRetransmitTime is subid 4 of ipv4InterfaceEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.2.1.4.28.1.4
 * Description:
The time between retransmissions of ARP requests to a
            neighbor when resolving the address or when probing the
            reachability of a neighbor.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 1
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *   defval: 1000
 *
 *
 * Its syntax is UNSIGNED32 (based on perltype UNSIGNED32)
 * The net-snmp type is ASN_UNSIGNED. The C type decl is u_long (u_long)
 */
/**
 * Extract the current value of the ipv4InterfaceRetransmitTime data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param ipv4InterfaceRetransmitTime_val_ptr
 *        Pointer to storage for a u_long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
ipv4InterfaceRetransmitTime_get(ipv4InterfaceTable_rowreq_ctx * rowreq_ctx,
                                u_long *
                                ipv4InterfaceRetransmitTime_val_ptr)
{
   /** we should have a non-NULL pointer */
    netsnmp_assert(NULL != ipv4InterfaceRetransmitTime_val_ptr);


    DEBUGMSGTL(("verbose:ipv4InterfaceTable:ipv4InterfaceRetransmitTime_get", "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    if (!
        (rowreq_ctx->data.ifentry->
         ns_flags & NETSNMP_INTERFACE_FLAGS_HAS_V4_RETRANSMIT))
        return MFD_SKIP;

    /*
     * TODO:231:o: |-> Extract the current value of the ipv4InterfaceRetransmitTime data.
     * copy (* ipv4InterfaceRetransmitTime_val_ptr ) from rowreq_ctx->data
     */
    (*ipv4InterfaceRetransmitTime_val_ptr) =
        rowreq_ctx->data.ipv4InterfaceRetransmitTime;

    return MFD_SUCCESS;
}                               /* ipv4InterfaceRetransmitTime_get */



/** @} */
/**********************************************************************
 **********************************************************************
 ***
 *** Table ipv4InterfaceTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * IP-MIB::ipv4InterfaceTable is subid 28 of ip.
 * Its status is Current.
 * OID: .1.3.6.1.2.1.4.28, length: 8
 */
    /*
     * NOTE: if you update this chart, please update the versions in
     *       local/mib2c-conf.d/parent-set.m2i
     *       agent/mibgroup/helpers/baby_steps.c
     * while you're at it.
     */
    /*
     ***********************************************************************
     * Baby Steps Flow Chart (2004.06.05)                                  *
     *                                                                     *
     * +--------------+    +================+    U = unconditional path    *
     * |optional state|    ||required state||    S = path for success      *
     * +--------------+    +================+    E = path for error        *
     ***********************************************************************
     *
     *                        +--------------+
     *                        |     pre      |
     *                        |   request    |
     *                        +--------------+
     *                               | U
     *                        +==============+
     *       +----------------||  object    ||
     *       |              E ||  lookup    ||
     *       |                +==============+
     *       |                       | S
     *       |                +==============+
     *       |              E ||   check    ||
     *       |<---------------||   values   ||
     *       |                +==============+
     *       |                       | S
     *       |                +==============+
     *       |       +<-------||   undo     ||
     *       |       |      E ||   setup    ||
     *       |       |        +==============+
     *       |       |               | S
     *       |       |        +==============+
     *       |       |        ||    set     ||-------------------------->+
     *       |       |        ||   value    || E                         |
     *       |       |        +==============+                           |
     *       |       |               | S                                 |
     *       |       |        +--------------+                           |
     *       |       |        |    check     |-------------------------->|
     *       |       |        |  consistency | E                         |
     *       |       |        +--------------+                           |
     *       |       |               | S                                 |
     *       |       |        +==============+         +==============+  |
     *       |       |        ||   commit   ||-------->||     undo   ||  |
     *       |       |        ||            || E       ||    commit  ||  |
     *       |       |        +==============+         +==============+  |
     *       |       |               | S                     U |<--------+
     *       |       |        +--------------+         +==============+
     *       |       |        | irreversible |         ||    undo    ||
     *       |       |        |    commit    |         ||     set    ||
     *       |       |        +--------------+         +==============+
     *       |       |               | U                     U |
     *       |       +-------------->|<------------------------+
     *       |                +==============+
     *       |                ||   undo     ||
     *       |                ||  cleanup   ||
     *       |                +==============+
     *       +---------------------->| U
     *                        +--------------+
     *                        |    post      |
     *                        |   request    |
     *                        +--------------+
     *
     */

/**
 * Setup up context with information needed to undo a set request.
 *
 * This function will be called before the individual node undo setup
 * functions are called. If you need to do any undo setup that is not
 * related to a specific column, you can do it here.
 *
 * Note that the undo context has been allocated with
 * ipv4InterfaceTable_allocate_data(), but may need extra
 * initialization similar to what you may have done in
 * ipv4InterfaceTable_rowreq_ctx_init().
 * Note that an individual node's undo_setup function will only be called
 * if that node is being set to a new value.
 *
 * If there is any setup specific to a particular column (e.g. allocating
 * memory for a string), you should do that setup in the node's undo_setup
 * function, so it won't be done unless it is necessary.
 *
 * @param rowreq_ctx
 *        Pointer to the table context (ipv4InterfaceTable_rowreq_ctx)
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error. set will fail.
 */
int
ipv4InterfaceTable_undo_setup(ipv4InterfaceTable_rowreq_ctx * rowreq_ctx)
{
    int             rc = MFD_SUCCESS;

    DEBUGMSGTL(("verbose:ipv4InterfaceTable:ipv4InterfaceTable_undo_setup",
                "called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:451:M: |-> Setup ipv4InterfaceTable undo.
     * set up ipv4InterfaceTable undo information, in preparation for a set.
     * Undo storage is in (* ipv4InterfaceRetransmitTime_val_ptr )*
     */

    return rc;
}                               /* ipv4InterfaceTable_undo_setup */

/**
 * Undo a set request.
 *
 * This function will be called before the individual node undo
 * functions are called. If you need to do any undo that is not
 * related to a specific column, you can do it here.
 *
 * Note that an individual node's undo function will only be called
 * if that node is being set to a new value.
 *
 * If there is anything  specific to a particular column (e.g. releasing
 * memory for a string), you should do that setup in the node's undo
 * function, so it won't be done unless it is necessary.
 *
 * @param rowreq_ctx
 *        Pointer to the table context (ipv4InterfaceTable_rowreq_ctx)
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error. set will fail.
 */
int
ipv4InterfaceTable_undo(ipv4InterfaceTable_rowreq_ctx * rowreq_ctx)
{
    int             rc = MFD_SUCCESS;

    DEBUGMSGTL(("verbose:ipv4InterfaceTable:ipv4InterfaceTable_undo",
                "called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:451:M: |-> ipv4InterfaceTable undo.
     * ipv4InterfaceTable undo information, in response to a failed set.
     * Undo storage is in (* ipv4InterfaceRetransmitTime_val_ptr )*
     */

    return rc;
}                               /* ipv4InterfaceTable_undo_setup */

/**
 * Cleanup up context undo information.
 *
 * This function will be called after set/commit processing. If you
 * allocated any resources in undo_setup, this is the place to release
 * those resources.
 *
 * This function is called regardless of the success or failure of the set
 * request. If you need to perform different steps for cleanup depending
 * on success or failure, you can add a flag to the rowreq_ctx.
 *
 * @param rowreq_ctx
 *        Pointer to the table context (ipv4InterfaceTable_rowreq_ctx)
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error
 */
int
ipv4InterfaceTable_undo_cleanup(ipv4InterfaceTable_rowreq_ctx * rowreq_ctx)
{
    int             rc = MFD_SUCCESS;

    DEBUGMSGTL(("verbose:ipv4InterfaceTable:ipv4InterfaceTable_undo_cleanup", "called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:452:M: |-> Cleanup ipv4InterfaceTable undo.
     * Undo storage is in (* ipv4InterfaceRetransmitTime_val_ptr )*
     */

    return rc;
}                               /* ipv4InterfaceTable_undo_cleanup */

/**
 * commit new values.
 *
 * At this point, you should have done everything you can to ensure that
 * this commit will not fail.
 *
 * Should you need different behavior depending on which columns were
 * set, rowreq_ctx->column_set_flags will indicate which writeable columns were
 * set. The definitions for the COLUMN_*_FLAG bits can be found in
 * ipv4InterfaceTable.h.
 * A new row will have the MFD_ROW_CREATED bit set in rowreq_flags.
 *
 * @param rowreq_ctx
 *        Pointer to the users context.
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error
 */
int
ipv4InterfaceTable_commit(ipv4InterfaceTable_rowreq_ctx * rowreq_ctx)
{
    int             rc = MFD_SUCCESS;
    int             save_flags;

    DEBUGMSGTL(("verbose:ipv4InterfaceTable:ipv4InterfaceTable_commit",
                "called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * save flags, then clear until we actually do something
     */
    save_flags = rowreq_ctx->column_set_flags;
    rowreq_ctx->column_set_flags = 0;

    /*
     * commit ipv4InterfaceTable data
     * 1) check the column's flag in save_flags to see if it was set.
     * 2) clear the flag when you handle that column
     * 3) set the column's flag in column_set_flags if it needs undo
     *    processing in case of a failure.
     */
    if (save_flags & COLUMN_IPV4INTERFACEENABLESTATUS_FLAG) {
        save_flags &= ~COLUMN_IPV4INTERFACEENABLESTATUS_FLAG;   /* clear ipv4InterfaceEnableStatus */
        /*
         * TODO:482:o: |-> commit column ipv4InterfaceEnableStatus.
         */
        rc = -1;
        if (-1 == rc) {
            snmp_log(LOG_ERR,
                     "ipv4InterfaceTable column ipv4InterfaceEnableStatus commit failed\n");
        } else {
            /*
             * set flag, in case we need to undo ipv4InterfaceEnableStatus
             */
            rowreq_ctx->column_set_flags |=
                COLUMN_IPV4INTERFACEENABLESTATUS_FLAG;
        }
    }

    /*
     * if we successfully commited this row, set the dirty flag.
     */
    if (MFD_SUCCESS == rc) {
        rowreq_ctx->rowreq_flags |= MFD_ROW_DIRTY;
    }

    if (save_flags) {
        snmp_log(LOG_ERR, "unhandled columns (0x%x) in commit\n",
                 save_flags);
        return MFD_ERROR;
    }

    return rc;
}                               /* ipv4InterfaceTable_commit */

/**
 * undo commit new values.
 *
 * Should you need different behavior depending on which columns were
 * set, rowreq_ctx->column_set_flags will indicate which writeable columns were
 * set. The definitions for the COLUMN_*_FLAG bits can be found in
 * ipv4InterfaceTable.h.
 * A new row will have the MFD_ROW_CREATED bit set in rowreq_flags.
 *
 * @param rowreq_ctx
 *        Pointer to the users context.
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error
 */
int
ipv4InterfaceTable_undo_commit(ipv4InterfaceTable_rowreq_ctx * rowreq_ctx)
{
    int             rc = MFD_SUCCESS;

    DEBUGMSGTL(("verbose:ipv4InterfaceTable:ipv4InterfaceTable_undo_commit", "called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:485:M: |-> Undo ipv4InterfaceTable commit.
     * check the column's flag in rowreq_ctx->column_set_flags to see
     * if it was set during commit, then undo it.
     *
     * eg: if (rowreq_ctx->column_set_flags & COLUMN__FLAG) {}
     */


    /*
     * if we successfully un-commited this row, clear the dirty flag.
     */
    if (MFD_SUCCESS == rc) {
        rowreq_ctx->rowreq_flags &= ~MFD_ROW_DIRTY;
    }

    return rc;
}                               /* ipv4InterfaceTable_undo_commit */

/*
 * TODO:440:M: Implement ipv4InterfaceTable node value checks.
 * TODO:450:M: Implement ipv4InterfaceTable undo functions.
 * TODO:460:M: Implement ipv4InterfaceTable set functions.
 * TODO:480:M: Implement ipv4InterfaceTable commit functions.
 */
/*---------------------------------------------------------------------
 * IP-MIB::ipv4InterfaceEntry.ipv4InterfaceEnableStatus
 * ipv4InterfaceEnableStatus is subid 3 of ipv4InterfaceEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.2.1.4.28.1.3
 * Description:
The indication of whether IPv4 is enabled (up) or disabled
            (down) on this interface.  This object does not affect the
            state of the interface itself, only its connection to an
            IPv4 stack.  The IF-MIB should be used to control the state
            of the interface.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  1      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 * Enum range: 1/8. Values:  up(1), down(2)
 *
 * Its syntax is INTEGER (based on perltype INTEGER)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (u_long)
 */
/**
 * Check that the proposed new value is potentially valid.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param ipv4InterfaceEnableStatus_val
 *        A long containing the new value.
 *
 * @retval MFD_SUCCESS        : incoming value is legal
 * @retval MFD_NOT_VALID_NOW  : incoming value is not valid now
 * @retval MFD_NOT_VALID_EVER : incoming value is never valid
 *
 * This is the place to check for requirements that are not
 * expressed in the mib syntax (for example, a requirement that
 * is detailed in the description for an object).
 *
 * You should check that the requested change between the undo value and the
 * new value is legal (ie, the transistion from one value to another
 * is legal).
 *      
 *@note
 * This check is only to determine if the new value
 * is \b potentially valid. This is the first check of many, and
 * is one of the simplest ones.
 * 
 *@note
 * this is not the place to do any checks for values
 * which depend on some other value in the mib. Those
 * types of checks should be done in the
 * ipv4InterfaceTable_check_dependencies() function.
 *
 * The following checks have already been done for you:
 *    The syntax is ASN_INTEGER
 *    The value is one of  up(1), down(2)
 *
 * If there a no other checks you need to do, simply return MFD_SUCCESS.
 *
 */
int
ipv4InterfaceEnableStatus_check_value(ipv4InterfaceTable_rowreq_ctx *
                                      rowreq_ctx,
                                      u_long ipv4InterfaceEnableStatus_val)
{
    DEBUGMSGTL(("verbose:ipv4InterfaceTable:ipv4InterfaceEnableStatus_check_value", "called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:441:o: |-> Check for valid ipv4InterfaceEnableStatus value.
     */
    /*
     * did the access code set the flag indicating that we can control
     * individual protocols on this interface?
     */
    if (rowreq_ctx->data.ifentry->ns_flags &
        NETSNMP_INTERFACE_FLAGS_CAN_DOWN_PROTOCOL);
    else
        return MFD_NOT_VALID_EVER;

    return MFD_SUCCESS;         /* ipv4InterfaceEnableStatus value not illegal */
}                               /* ipv4InterfaceEnableStatus_check_value */

/**
 * Save old value information
 *
 * @param rowreq_ctx
 *        Pointer to the table context (ipv4InterfaceTable_rowreq_ctx)
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error. set will fail.
 *
 * This function will be called after the table level undo setup function
 * ipv4InterfaceTable_undo_setup has been called.
 *
 *@note
 * this function will only be called if a new value is set for this column.
 *
 * If there is any setup specific to a particular column (e.g. allocating
 * memory for a string), you should do that setup in this function, so it
 * won't be done unless it is necessary.
 */
int
ipv4InterfaceEnableStatus_undo_setup(ipv4InterfaceTable_rowreq_ctx *
                                     rowreq_ctx)
{
    DEBUGMSGTL(("verbose:ipv4InterfaceTable:ipv4InterfaceEnableStatus_undo_setup", "called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:455:o: |-> Setup ipv4InterfaceEnableStatus undo.
     */
    /*
     * copy ipv4InterfaceEnableStatus data
     * set rowreq_ctx->undo->ipv4InterfaceEnableStatus from rowreq_ctx->data.ipv4InterfaceEnableStatus
     */
    rowreq_ctx->undo->ipv4InterfaceEnableStatus =
        rowreq_ctx->data.ipv4InterfaceEnableStatus;


    return MFD_SUCCESS;
}                               /* ipv4InterfaceEnableStatus_undo_setup */

/**
 * Set the new value.
 *
 * @param rowreq_ctx
 *        Pointer to the users context. You should know how to
 *        manipulate the value from this object.
 * @param ipv4InterfaceEnableStatus_val
 *        A long containing the new value.
 */
int
ipv4InterfaceEnableStatus_set(ipv4InterfaceTable_rowreq_ctx * rowreq_ctx,
                              u_long ipv4InterfaceEnableStatus_val)
{

    DEBUGMSGTL(("verbose:ipv4InterfaceTable:ipv4InterfaceEnableStatus_set",
                "called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:461:M: |-> Set ipv4InterfaceEnableStatus value.
     * set ipv4InterfaceEnableStatus value in rowreq_ctx->data
     */
    rowreq_ctx->data.ipv4InterfaceEnableStatus =
        ipv4InterfaceEnableStatus_val;

    return MFD_SUCCESS;
}                               /* ipv4InterfaceEnableStatus_set */

/**
 * undo the previous set.
 *
 * @param rowreq_ctx
 *        Pointer to the users context.
 */
int
ipv4InterfaceEnableStatus_undo(ipv4InterfaceTable_rowreq_ctx * rowreq_ctx)
{

    DEBUGMSGTL(("verbose:ipv4InterfaceTable:ipv4InterfaceEnableStatus_undo", "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:456:o: |-> Clean up ipv4InterfaceEnableStatus undo.
     */
    /*
     * copy ipv4InterfaceEnableStatus data
     * set rowreq_ctx->data.ipv4InterfaceEnableStatus from rowreq_ctx->undo->ipv4InterfaceEnableStatus
     */
    rowreq_ctx->data.ipv4InterfaceEnableStatus =
        rowreq_ctx->undo->ipv4InterfaceEnableStatus;


    return MFD_SUCCESS;
}                               /* ipv4InterfaceEnableStatus_undo */

/** @} */
/** @{ */