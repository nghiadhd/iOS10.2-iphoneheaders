/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKRecordID, NSData;

@interface CKUserIdentityLookupInfo : NSObject <NSSecureCoding, NSCopying> {

	BOOL _shouldReportMissingIdentity;
	NSString* _emailAddress;
	NSString* _phoneNumber;
	CKRecordID* _userRecordID;
	NSString* _dsid;
	NSData* _encryptedPersonalInfo;

}

@property (nonatomic,copy) NSString * emailAddress;                         //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,copy) CKRecordID * userRecordID;                       //@synthesize userRecordID=_userRecordID - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                          //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (assign,nonatomic) BOOL shouldReportMissingIdentity;              //@synthesize shouldReportMissingIdentity=_shouldReportMissingIdentity - In the implementation block
@property (nonatomic,retain) NSString * dsid;                               //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,retain) NSData * encryptedPersonalInfo;                //@synthesize encryptedPersonalInfo=_encryptedPersonalInfo - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)lookupInfosWithRecordIDs:(id)arg1 ;
+(id)lookupInfosWithPhoneNumbers:(id)arg1 ;
+(id)lookupInfosWithEmails:(id)arg1 ;
-(BOOL)hasEncryptedPersonalInfo;
-(void)_encryptPersonalInfoWithPCSBlob:(OpaquePCSShareProtectionRef)arg1 pcsManager:(id)arg2 participantID:(id)arg3 ;
-(void)_decryptPersonalInfoWithPCSBlob:(OpaquePCSShareProtectionRef)arg1 pcsManager:(id)arg2 participantID:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)phoneNumber;
-(id)lookupValue;
-(void)_stripPersonalInfo;
-(NSString *)emailAddress;
-(NSString *)dsid;
-(void)setEmailAddress:(NSString *)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setDsid:(NSString *)arg1 ;
-(id)initWithEmailAddress:(id)arg1 ;
-(NSData *)encryptedPersonalInfo;
-(void)setEncryptedPersonalInfo:(NSData *)arg1 ;
-(id)CKPropertiesDescription;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(id)ckShortDescription;
-(void)setShouldReportMissingIdentity:(BOOL)arg1 ;
-(long long)lookupField;
-(id)initWithUserRecordID:(id)arg1 ;
-(BOOL)shouldReportMissingIdentity;
-(CKRecordID *)userRecordID;
-(void)setUserRecordID:(CKRecordID *)arg1 ;
-(id)initWithPhoneNumber:(id)arg1 ;
@end

