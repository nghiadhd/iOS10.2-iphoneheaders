/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MRTransactionPacketizer;

@interface MRTransactionDestination : NSObject {

	MRTransactionPacketizer* _packetizer;
	unsigned long long _name;

}

@property (nonatomic,readonly) unsigned long long name;              //@synthesize name=_name - In the implementation block
-(void)dealloc;
-(unsigned long long)name;
-(id)initWithName:(unsigned long long)arg1 ;
-(void)packetsFromMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_cleanUp;
-(void)unpacketize:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

