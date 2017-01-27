/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommCenter/CommCenter-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTCellularPlanPrimarySimCache : NSObject <NSCopying, NSSecureCoding> {

	NSString* _iccid;
	NSString* _carrierName;
	NSString* _iso;
	NSString* _mcc;
	NSString* _mnc;

}

@property (nonatomic,retain) NSString * iccid;                    //@synthesize iccid=_iccid - In the implementation block
@property (nonatomic,retain) NSString * carrierName;              //@synthesize carrierName=_carrierName - In the implementation block
@property (nonatomic,retain) NSString * iso;                      //@synthesize iso=_iso - In the implementation block
@property (nonatomic,retain) NSString * mcc;                      //@synthesize mcc=_mcc - In the implementation block
@property (nonatomic,retain) NSString * mnc;                      //@synthesize mnc=_mnc - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithIccid:(id)arg1 carrierName:(id)arg2 iso:(id)arg3 mcc:(id)arg4 mnc:(id)arg5 ;
-(NSString *)iso;
-(void)setIso:(NSString *)arg1 ;
-(NSString *)mcc;
-(void)setMcc:(NSString *)arg1 ;
-(NSString *)mnc;
-(void)setMnc:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)iccid;
-(void)setIccid:(NSString *)arg1 ;
-(NSString *)carrierName;
-(void)setCarrierName:(NSString *)arg1 ;
@end

