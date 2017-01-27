/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKitLegacy/WebKitLegacy-Structs.h>
@class NSMutableSet;

@interface WebBasePluginPackage : NSObject {

	NSMutableSet* pluginDatabases;
	String* path;
	PluginInfo* pluginInfo;
	RetainPtr<__CFBundle *>* cfBundle;
	/*function pointer*/void* BP_CreatePluginMIMETypesPreferences;

}
+(id)pluginWithPath:(id)arg1 ;
+(void)initialize;
-(oneway void)release;
-(oneway void)_webcore_releaseOnWebThread;
-(unsigned)versionNumber;
-(void)createPropertyListFile;
-(id)_objectForInfoDictionaryKey:(id)arg1 ;
-(id)pListForPath:(id)arg1 createFile:(BOOL)arg2 ;
-(BOOL)getPluginInfoFromPLists;
-(const PluginInfo*)pluginInfo;
-(BOOL)supportsExtension:(const String*)arg1 ;
-(BOOL)supportsMIMEType:(const String*)arg1 ;
-(BOOL)isJavaPlugIn;
-(BOOL)isNativeLibraryData:(id)arg1 ;
-(void)wasAddedToPluginDatabase:(id)arg1 ;
-(void)wasRemovedFromPluginDatabase:(id)arg1 ;
-(void)dealloc;
-(String*)bundleIdentifier;
-(const String*)path;
-(BOOL)isQuickTimePlugIn;
-(id)initWithPath:(id)arg1 ;
-(BOOL)load;
-(String*)bundleVersion;
-(id)MIMETypeForExtension:(const String*)arg1 ;
-(void)unload;
@end

