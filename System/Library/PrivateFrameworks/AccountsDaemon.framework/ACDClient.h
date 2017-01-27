/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccountsDaemon/AccountsDaemon-Structs.h>
@class NSXPCConnection, ACDDatabase, NSString, NSNumber, NSMutableDictionary;

@interface ACDClient : NSObject {

	NSXPCConnection* _connection;
	ACDDatabase* _database;
	CFBundleRef _bundle;
	NSString* _bundleID;
	BOOL _didManuallySetBundleID;
	NSNumber* _pid;
	NSString* _localizedAppName;
	NSString* _name;
	NSMutableDictionary* _entitlementChecks;

}

@property (nonatomic,retain) NSString * bundleID; 
@property (nonatomic,readonly) CFBundleRef bundle; 
@property (nonatomic,readonly) NSString * localizedAppName; 
@property (nonatomic,readonly) NSString * adamOrDisplayID; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSNumber * pid; 
@property (nonatomic,readonly) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) ACDDatabase * database;                    //@synthesize database=_database - In the implementation block
+(id)clientWithBundleID:(id)arg1 ;
+(id)_bundleForNonPlugInPID:(int)arg1 ;
+(id)_bundleIDForPID:(int)arg1 ;
+(id)_bundleForPID:(int)arg1 ;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(NSString *)name;
-(CFBundleRef)bundle;
-(NSXPCConnection *)connection;
-(BOOL)hasEntitlement:(id)arg1 ;
-(NSString *)adamOrDisplayID;
-(id)_displayNameFromSpringBoardForPID:(int)arg1 ;
-(id)_displayNameFromBundleInfoDictionaryForPID:(int)arg1 ;
-(NSString *)localizedAppName;
-(id)shortDebugDescription;
-(id)longDebugDescription;
-(id)initWithConnection:(id)arg1 database:(id)arg2 ;
-(NSString *)bundleID;
-(ACDDatabase *)database;
-(id)initWithConnection:(id)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(NSNumber *)pid;
@end

