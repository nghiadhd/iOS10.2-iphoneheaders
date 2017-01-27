/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>
#import <libobjc.A.dylib/BRCAllItemsDidUploadTracker.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class BRCAccountSession, NSMutableArray, NSMutableDictionary, NSString;

@interface BRCUploadAllFilesTrackerOperation : _BRCFrameworkOperation <BRCAllItemsDidUploadTracker, BRCOperationSubclass> {

	BRCAccountSession* _session;
	NSMutableArray* _zonesStillUploading;
	NSMutableArray* _hiddenZoneWithError;
	NSMutableDictionary* _perContainerIDError;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(NSString *)description;
-(void)main;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(void)clientZone:(id)arg1 didFinishUploadingAllItemsWithError:(id)arg2 ;
-(id)initWithSession:(id)arg1 appLibraries:(id)arg2 ;
@end

