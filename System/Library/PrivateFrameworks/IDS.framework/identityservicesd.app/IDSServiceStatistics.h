/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IDSServiceStatistics : NSObject {

	unsigned long long _packetsSent;
	unsigned long long _packetsReceived;
	unsigned long long _bytesSent;
	unsigned long long _bytesReceived;

}

@property (assign,nonatomic) unsigned long long packetsSent;                  //@synthesize packetsSent=_packetsSent - In the implementation block
@property (assign,nonatomic) unsigned long long packetsReceived;              //@synthesize packetsReceived=_packetsReceived - In the implementation block
@property (assign,nonatomic) unsigned long long bytesSent;                    //@synthesize bytesSent=_bytesSent - In the implementation block
@property (assign,nonatomic) unsigned long long bytesReceived;                //@synthesize bytesReceived=_bytesReceived - In the implementation block
-(id)description;
-(void)setBytesSent:(unsigned long long)arg1 ;
-(void)setPacketsSent:(unsigned long long)arg1 ;
-(void)setBytesReceived:(unsigned long long)arg1 ;
-(void)setPacketsReceived:(unsigned long long)arg1 ;
-(unsigned long long)bytesSent;
-(unsigned long long)packetsSent;
-(unsigned long long)bytesReceived;
-(unsigned long long)packetsReceived;
@end

