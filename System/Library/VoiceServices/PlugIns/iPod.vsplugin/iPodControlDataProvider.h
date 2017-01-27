/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/VoiceServices/PlugIns/iPod.vsplugin/iPod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iPod/iPod-Structs.h>
#import <libobjc.A.dylib/VSRecognitionModelDataProvider.h>

@protocol OS_dispatch_queue;
@class MPMediaLibrary, NSMutableDictionary, NSObject, NSString;

@interface iPodControlDataProvider : NSObject <VSRecognitionModelDataProvider> {

	MPMediaLibrary* _library;
	NSMutableDictionary* _queriesByClassID;
	NSMutableDictionary* _collectionsByClassID;
	NSObject*<OS_dispatch_queue> _reportingQueue;
	int _suppressionToken;
	int _stopSuppressionToken;
	struct {
		unsigned observingChanges : 1;
		unsigned suppressingChanges : 1;
		unsigned pendingChanges : 1;
	}  _providerFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)beginReportingChanges;
-(void)stopReportingChanges;
-(long long)valueCountForClassWithIdentifier:(id)arg1 inModelWithIdentifier:(id)arg2 ;
-(id)valueAtIndex:(long long)arg1 forClassWithIdentifier:(id)arg2 inModelWithIdentifier:(id)arg3 ;
-(id)cacheValidityIdentifier;
-(BOOL)isCacheValidityIdentifierValid:(id)arg1 ;
-(id)_library;
-(id)_queryForClassID:(id)arg1 ;
-(id)_collectionsForClassID:(id)arg1 ;
-(void)_libraryChanged:(id)arg1 ;
@end

