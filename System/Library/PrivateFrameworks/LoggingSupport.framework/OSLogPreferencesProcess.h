/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSMutableDictionary;

@interface OSLogPreferencesProcess : NSObject {

	NSString* _systemPrefsFile;
	NSDictionary* _systemPrefs;
	NSString* _internalPrefsFile;
	NSDictionary* _internalPrefs;
	NSString* _prefsFile;
	NSMutableDictionary* _prefs;
	NSString* _bundleID;

}

@property (nonatomic,readonly) NSString * bundleID;                            //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) BOOL isLocked; 
@property (nonatomic,readonly) long long effectiveEnabledLevel; 
@property (nonatomic,readonly) long long effectivePersistedLevel; 
@property (assign,nonatomic) long long enabledLevel; 
@property (assign,nonatomic) long long persistedLevel; 
-(void)reset;
-(BOOL)isLocked;
-(NSString *)bundleID;
-(long long)effectiveEnabledLevel;
-(long long)effectivePersistedLevel;
-(long long)enabledLevel;
-(void)setEnabledLevel:(long long)arg1 ;
-(long long)persistedLevel;
-(void)setPersistedLevel:(long long)arg1 ;
-(id)initWithBundleID:(id)arg1 ;
-(id)_levelPrefs;
-(long long)defaultEnabledLevel;
-(long long)defaultPersistedLevel;
@end

