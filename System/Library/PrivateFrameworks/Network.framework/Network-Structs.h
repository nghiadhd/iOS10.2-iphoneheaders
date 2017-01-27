/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct tcp_connection_fallback_watch_s* tcp_connection_fallback_watch_sRef;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned timestamp : 1;
	unsigned connectionCellularFallbackCount : 1;
	unsigned endpointsFetchTaskBadReplyCount : 1;
	unsigned endpointsFetchTaskCount : 1;
	unsigned endpointsFetchTaskFailureCount : 1;
	unsigned endpointsFetchTaskSuccessCount : 1;
} SCD_Struct_NW2;

typedef struct __SecTrust* SecTrustRef;

typedef struct nw_tls_context* nw_tls_contextRef;

typedef struct __SecIdentity* SecIdentityRef;

typedef struct {
	unsigned interfaceType : 1;
	unsigned ipProtocol : 1;
	unsigned tcpECNIntClientSetup : 1;
	unsigned tcpECNIntClientSuccess : 1;
	unsigned tcpECNIntConnNoPLCE : 1;
	unsigned tcpECNIntConnPLCE : 1;
	unsigned tcpECNIntConnPLNoCE : 1;
	unsigned tcpECNIntConnRecvCE : 1;
	unsigned tcpECNIntConnRecvECE : 1;
	unsigned tcpECNIntFallbackCE : 1;
	unsigned tcpECNIntFallbackReorder : 1;
	unsigned tcpECNIntFallbackSynLoss : 1;
	unsigned tcpECNIntNotSupportedPeer : 1;
	unsigned tcpECNIntOffAvgRTT : 1;
	unsigned tcpECNIntOffDropRst : 1;
	unsigned tcpECNIntOffDropRxmt : 1;
	unsigned tcpECNIntOffOOBPer : 1;
	unsigned tcpECNIntOffRTTVar : 1;
	unsigned tcpECNIntOffReorderPer : 1;
	unsigned tcpECNIntOffRxmtPer : 1;
	unsigned tcpECNIntOffSACKE : 1;
	unsigned tcpECNIntOffTotalOOPkts : 1;
	unsigned tcpECNIntOffTotalRxPkts : 1;
	unsigned tcpECNIntOffTotalRxmtPkts : 1;
	unsigned tcpECNIntOffTotalTxPkts : 1;
	unsigned tcpECNIntOnAvgRTT : 1;
	unsigned tcpECNIntOnDropRst : 1;
	unsigned tcpECNIntOnDropRxmt : 1;
	unsigned tcpECNIntOnOOBPer : 1;
	unsigned tcpECNIntOnRTTVar : 1;
	unsigned tcpECNIntOnReorderPer : 1;
	unsigned tcpECNIntOnSACKE : 1;
	unsigned tcpECNIntOnTotalOOPkts : 1;
	unsigned tcpECNIntOnTotalRxPkts : 1;
	unsigned tcpECNIntOnTotalRxmtPkts : 1;
	unsigned tcpECNIntOnTotalTxPkts : 1;
	unsigned tcpECNIntRecvCE : 1;
	unsigned tcpECNIntRecvECE : 1;
	unsigned tcpECNIntRxmtPer : 1;
	unsigned tcpECNIntSentECE : 1;
	unsigned tcpECNIntServerSetup : 1;
	unsigned tcpECNIntServerSuccess : 1;
	unsigned tcpECNIntSynAckLost : 1;
	unsigned tcpECNIntSynLost : 1;
	unsigned tcpECNIntTotalConnections : 1;
	unsigned tcpUnsentDataAtSleepCnt : 1;
} SCD_Struct_NW6;

typedef struct {
	unsigned numTfoBlackholed : 1;
	unsigned numTfoCookieInvalid : 1;
	unsigned numTfoCookieRcv : 1;
	unsigned numTfoCookieReq : 1;
	unsigned numTfoCookieReqRcv : 1;
	unsigned numTfoCookieSent : 1;
	unsigned numTfoFallback : 1;
	unsigned numTfoSynDataAcked : 1;
	unsigned numTfoSynDataRcv : 1;
	unsigned numTfoSynDataSent : 1;
	unsigned timestamp : 1;
} SCD_Struct_NW7;

typedef struct {
	unsigned connectedAddressIndex : 1;
	unsigned connectionReuseCount : 1;
	unsigned dataStallCount : 1;
	unsigned flowConnectMilliseconds : 1;
	unsigned flowDurationMilliseconds : 1;
	unsigned ipv4AddressCount : 1;
	unsigned ipv6AddressCount : 1;
	unsigned pathTriggerMilliseconds : 1;
	unsigned proxyMilliseconds : 1;
	unsigned resolutionMilliseconds : 1;
	unsigned timestamp : 1;
	unsigned tlsMilliseconds : 1;
	unsigned trafficClass : 1;
	unsigned connectedAddressFamily : 1;
	unsigned connectedInterfaceType : 1;
	unsigned connectionMode : 1;
	unsigned failureReason : 1;
	unsigned firstAddressFamily : 1;
	unsigned usedProxyType : 1;
	unsigned customProxyConfigured : 1;
	unsigned fallbackEligible : 1;
	unsigned multipathConfigured : 1;
	unsigned resolutionRequired : 1;
	unsigned synthesizedIPv6Address : 1;
	unsigned systemProxyConfigured : 1;
	unsigned tfoConfigured : 1;
	unsigned tlsConfigured : 1;
	unsigned triggeredPath : 1;
	unsigned usedFallback : 1;
	unsigned weakFallback : 1;
} SCD_Struct_NW8;

typedef struct {
	unsigned establishmentTime : 1;
	unsigned postConnectSessionLifetime : 1;
	unsigned timestamp : 1;
	unsigned establishmentFailureError : 1;
	unsigned establishmentSynRetransmits : 1;
	unsigned postConnectSubflowAttemptCount : 1;
	unsigned postConnectSubflowMaxSubflowCount : 1;
	unsigned subflowSwitchingCount : 1;
	unsigned establishmentCellularFallback : 1;
	unsigned establishmentForcedTcpFallback : 1;
	unsigned establishmentSuccess : 1;
	unsigned establishmentTcpFallback : 1;
	unsigned postConnectMultiHomed : 1;
	unsigned postConnectSingleHomed : 1;
} SCD_Struct_NW9;

typedef struct {
	unsigned appDataStallTimerMsecs : 1;
	unsigned appReportingDataStallCount : 1;
	unsigned bestRTTMsecs : 1;
	unsigned betterRouteEventCount : 1;
	unsigned bytesDuplicate : 1;
	unsigned bytesIn : 1;
	unsigned bytesOut : 1;
	unsigned bytesOutOfOrder : 1;
	unsigned bytesRetransmitted : 1;
	unsigned connectionEstablishmentTimeMsecs : 1;
	unsigned connectionReuseCount : 1;
	unsigned currentRTTMsecs : 1;
	unsigned dNSResolvedTimeMsecs : 1;
	unsigned flowDurationMsecs : 1;
	unsigned iPAddressAttemptCount : 1;
	unsigned packetsDuplicate : 1;
	unsigned packetsIn : 1;
	unsigned packetsOut : 1;
	unsigned packetsOutOfOrder : 1;
	unsigned packetsRetransmitted : 1;
	unsigned rTTvariance : 1;
	unsigned smoothedRTTMsecs : 1;
	unsigned synRetransmissionCount : 1;
	unsigned timeToConnectionEstablishmentMsecs : 1;
	unsigned timeToConnectionStartMsecs : 1;
	unsigned timeToDNSResolvedMsecs : 1;
	unsigned timeToDNSStartMsecs : 1;
	unsigned trafficClass : 1;
	unsigned connectedInterfaceType : 1;
	unsigned interfaceType : 1;
	unsigned cellularFallback : 1;
	unsigned cellularRRCConnected : 1;
	unsigned connected : 1;
	unsigned dNSAnswersCached : 1;
	unsigned kernelReportedStalls : 1;
	unsigned kernelReportingConnectionStalled : 1;
	unsigned kernelReportingReadStalled : 1;
	unsigned kernelReportingWriteStalled : 1;
	unsigned tcpFastOpen : 1;
} SCD_Struct_NW10;

typedef struct {
	unsigned timestamp : 1;
	unsigned reportReason : 1;
} SCD_Struct_NW11;

typedef struct {
	unsigned fallbackConnectionCount : 1;
	unsigned totalConnectionCount : 1;
	unsigned totalSuccessfulConnectionCount : 1;
} SCD_Struct_NW12;

typedef struct {
	unsigned tcpConnectionAccepts : 1;
	unsigned tcpConnectionAttempts : 1;
	unsigned tcpIPv4AvgRTT : 1;
	unsigned tcpIPv6AvgRTT : 1;
	unsigned tcpRecvPLR : 1;
	unsigned tcpSendPLR : 1;
	unsigned tcpSendReorderRate : 1;
	unsigned tcpSendTLRTO : 1;
} SCD_Struct_NW13;

typedef struct {
	int list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_NW14;

typedef struct {
	unsigned long long list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_NW15;

typedef struct {
	long long list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_NW16;

typedef struct {
	unsigned bytesReceived : 1;
	unsigned bytesSent : 1;
	unsigned clientConnectionCount : 1;
	unsigned connectionDuration : 1;
	unsigned timestamp : 1;
	unsigned connectionAttemptCount : 1;
	unsigned connectionCellularFallbackCount : 1;
	unsigned connectionFailureCount : 1;
	unsigned connectionSuccessMptcpCount : 1;
	unsigned connectionSuccessTcpCount : 1;
	unsigned resumptionFailureCount : 1;
	unsigned resumptionSuccessCount : 1;
	unsigned suspensionCount : 1;
	unsigned upgradeSuccessAndNotNeededCount : 1;
	unsigned upgradeSuccessAndPrimaryCount : 1;
} SCD_Struct_NW17;

typedef struct {
	unsigned numTfoBlackholed : 1;
	unsigned numTfoCookieInvalid : 1;
	unsigned numTfoCookieRcv : 1;
	unsigned numTfoCookieReq : 1;
	unsigned numTfoCookieReqRcv : 1;
	unsigned numTfoCookieSent : 1;
	unsigned numTfoFallback : 1;
	unsigned numTfoSynDataAcked : 1;
	unsigned numTfoSynDataRcv : 1;
	unsigned numTfoSynDataSent : 1;
} SCD_Struct_NW18;

typedef struct {
	unsigned field1[8];
} SCD_Struct_NW19;

typedef struct netcore_stats_tcp_statistics_report {
	unsigned time_to_dns_resolved_msecs;
	unsigned time_to_dns_start_msecs;
	unsigned dns_resolved_time_msecs;
	BOOL dns_answers_cached;
	int interface_type;
	unsigned time_to_connection_start_msecs;
	unsigned time_to_connection_establishment_msecs;
	unsigned connection_establishment_time_msecs;
	unsigned flow_duration_msecs;
	int connected_interface_type;
	BOOL connected;
	unsigned traffic_class;
	BOOL cellular_fallback;
	BOOL cellular_rrc_connected;
	BOOL kernel_reported_stalls;
	BOOL kernel_reporting_connection_stalled;
	BOOL kernel_reporting_read_stalled;
	BOOL kernel_reporting_write_stalled;
	unsigned long long bytes_in;
	unsigned long long bytes_out;
	unsigned long long bytes_duplicate;
	unsigned long long bytes_ooo;
	unsigned long long bytes_retransmitted;
	unsigned long long packets_in;
	unsigned long long packets_out;
	unsigned long long packets_duplicate;
	unsigned long long packets_ooo;
	unsigned long long packets_retransmitted;
	unsigned current_rtt_msecs;
	unsigned smoothed_rtt_msecs;
	unsigned best_rtt_msecs;
	unsigned rtt_variance;
	unsigned syn_retransmission_count;
	BOOL tcp_fast_open;
	unsigned better_route_event_count;
	unsigned connection_reuse_count;
	unsigned app_reporting_data_stall_count;
	unsigned app_data_stall_timer_msecs;
} netcore_stats_tcp_statistics_report;

typedef struct netcore_stats_network_event {
	int network_event_type;
	unsigned time_to_network_event_msecs;
} netcore_stats_network_event;

typedef struct netcore_stats_data_usage_snapshot {
	unsigned long long bytes_in;
	unsigned long long bytes_out;
} netcore_stats_data_usage_snapshot;

typedef struct nw_connection_report_s {
	unsigned triggered_path : 1;
	unsigned system_proxy_configured : 1;
	unsigned custom_proxy_configured : 1;
	unsigned fallback_eligible : 1;
	unsigned weak_fallback : 1;
	unsigned used_fallback : 1;
	unsigned resolution_required : 1;
	unsigned tls_configured : 1;
	unsigned tfo_configured : 1;
	unsigned multipath_configured : 1;
	unsigned connected : 1;
	unsigned tls_succeeded : 1;
	unsigned synthesized_ipv6_address : 1;
	unsigned used_proxy_type;
	unsigned traffic_class;
	int failure_reason;
	unsigned path_trigger_milliseconds;
	unsigned resolution_milliseconds;
	unsigned proxy_milliseconds;
	unsigned flow_connect_milliseconds;
	unsigned tls_milliseconds;
	unsigned flow_duration_milliseconds;
	unsigned ipv4_address_count;
	unsigned ipv6_address_count;
	unsigned char first_address_family;
	unsigned char connected_address_family;
	unsigned connected_address_index;
	int connected_interface_type;
	unsigned connection_reuse_count;
	unsigned data_stall_count;
	int connection_mode;
} nw_connection_report_s;

typedef struct netcore_stats_tcp_cell_fallback_report {
	BOOL fellback;
	int deny_reason;
	unsigned fallback_timer_msecs;
	unsigned network_event_count;
	netcore_stats_network_event network_events[20];
	unsigned data_usage_snapshots_at_network_events_count;
	netcore_stats_data_usage_snapshot data_usage_snapshots_at_network_events[20];
} netcore_stats_tcp_cell_fallback_report;

typedef struct {
	int report_reason;
	netcore_stats_tcp_statistics_report statistics_report;
	netcore_stats_tcp_cell_fallback_report fallback_report;
	unsigned ip_address_attempt_count;
	netcore_stats_tcp_statistics_report connection_attempts[10];
} SCD_Struct_NW25;

typedef struct netcore_stats_tcp_report {
	BOOL delegated;
	BOOL legacy;
	/*function pointer*/void* u;
	SCD_Struct_NW25 legacy;
	nw_connection_report_s) nw_connection_report;
} netcore_stats_tcp_report;

typedef struct {
	unsigned iPAddressAttemptCount : 1;
	unsigned timestamp : 1;
	unsigned reportReason : 1;
	unsigned delegated : 1;
} SCD_Struct_NW27;

typedef struct {
	unsigned tcpECNClientSetup : 1;
	unsigned tcpECNClientSuccess : 1;
	unsigned tcpECNConnNoPacketLossCE : 1;
	unsigned tcpECNConnPacketLossCE : 1;
	unsigned tcpECNConnPacketLossNoCE : 1;
	unsigned tcpECNConnRecvCE : 1;
	unsigned tcpECNConnRecvECE : 1;
	unsigned tcpECNFallbackCE : 1;
	unsigned tcpECNFallbackReorder : 1;
	unsigned tcpECNFallbackSynLoss : 1;
	unsigned tcpECNNotSupportedPeer : 1;
	unsigned tcpECNRecvCE : 1;
	unsigned tcpECNRecvECE : 1;
	unsigned tcpECNSentECE : 1;
	unsigned tcpECNServerSetup : 1;
	unsigned tcpECNServerSuccess : 1;
	unsigned tcpECNSynAckLost : 1;
	unsigned tcpECNSynLost : 1;
	unsigned tcpECNClientNegotiationEnabled : 1;
	unsigned tcpECNServerNegotiationEnabled : 1;
} SCD_Struct_NW28;

