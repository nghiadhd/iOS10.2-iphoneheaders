/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSLock;

@interface KeychainWrapper : NSObject {

	NSString* _accountName;
	NSString* _serviceName;
	NSLock* _lock;

}

@property (nonatomic,copy) NSString * accountName;              //@synthesize accountName=_accountName - In the implementation block
@property (nonatomic,copy) NSString * serviceName;              //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSLock * lock;                     //@synthesize lock=_lock - In the implementation block
+(id)keychainWrapperWithMACAddress:(id)arg1 ;
+(id)keychainPasswordForMACAddress:(id)arg1 ;
+(void)removeKeychainPasswordForMACAddress:(id)arg1 ;
-(void)dealloc;
-(NSLock *)lock;
-(NSString *)accountName;
-(void)setAccountName:(NSString *)arg1 ;
-(id)genericPasswordQuery;
-(int)addGenericPassword:(id)arg1 withLabel:(id)arg2 andDescription:(id)arg3 ;
-(void)removeGenericPassword;
-(id)initWithAccountName:(id)arg1 serviceName:(id)arg2 ;
-(id)genericPassword;
-(id)getPasswordFromQuery:(id)arg1 ;
-(id)getGenericPassword;
-(void)setServiceName:(NSString *)arg1 ;
-(NSString *)serviceName;
-(void)setLock:(NSLock *)arg1 ;
@end

