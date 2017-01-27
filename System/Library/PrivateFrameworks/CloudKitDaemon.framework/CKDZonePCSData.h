/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDPCSData.h>

@class CKRecordZoneID;

@interface CKDZonePCSData : CKDPCSData {

	CKRecordZoneID* _zoneID;

}

@property (nonatomic,retain) CKRecordZoneID * zoneID;              //@synthesize zoneID=_zoneID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)dataWithZoneID:(id)arg1 pcsData:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)itemID;
-(id)initWithZoneID:(id)arg1 pcsData:(id)arg2 ;
-(CKRecordZoneID *)zoneID;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
@end

