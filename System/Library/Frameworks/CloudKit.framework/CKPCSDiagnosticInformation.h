/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableDictionary, NSMutableArray;

@interface CKPCSDiagnosticInformation : NSObject <NSSecureCoding> {

	NSString* _identityInfo;
	NSString* _serviceIdentityInfo;
	NSMutableDictionary* _pcsInfoByZoneID;
	NSMutableArray* _notFoundZoneIDs;

}

@property (nonatomic,retain) NSString * identityInfo;                            //@synthesize identityInfo=_identityInfo - In the implementation block
@property (nonatomic,retain) NSString * serviceIdentityInfo;                     //@synthesize serviceIdentityInfo=_serviceIdentityInfo - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pcsInfoByZoneID;              //@synthesize pcsInfoByZoneID=_pcsInfoByZoneID - In the implementation block
@property (nonatomic,retain) NSMutableArray * notFoundZoneIDs;                   //@synthesize notFoundZoneIDs=_notFoundZoneIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)identityInfo;
-(NSString *)serviceIdentityInfo;
-(void)setNotFoundZoneIDs:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)pcsInfoByZoneID;
-(void)setPcsInfoByZoneID:(NSMutableDictionary *)arg1 ;
-(void)setIdentityInfo:(NSString *)arg1 ;
-(void)setServiceIdentityInfo:(NSString *)arg1 ;
-(NSMutableArray *)notFoundZoneIDs;
@end

