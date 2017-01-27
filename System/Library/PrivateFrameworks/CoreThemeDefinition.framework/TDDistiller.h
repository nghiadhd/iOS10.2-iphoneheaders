/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
@class CoreThemeDocument, CUIMutableCommonAssetStorage, NSMutableArray, NSArray, NSString, TDLogger, NSThread, NSUUID;

@interface TDDistiller : NSObject {

	CoreThemeDocument* _document;
	CUIMutableCommonAssetStorage* _assetStore;
	NSMutableArray* _renditionEntries;
	NSArray* _changedProductions;
	NSArray* _mainThreadPerformRunLoopModes;
	int _fileCompression;
	BOOL _incremental;
	BOOL _cancelled;
	BOOL _successful;
	BOOL _finished;
	NSString* _assetStoreVersionString;
	long long _assetStoreVersionNumber;
	TDLogger* _logger;
	NSString* _accumulatedErrorDescription;
	NSThread* _callbackThread;
	/*^block*/id _oldCompletionHandler;
	/*^block*/id _completionHandler;

}

@property (getter=isIncremental) BOOL incremental;                                //@synthesize incremental=_incremental - In the implementation block
@property (getter=isCancelled) BOOL cancelled;                                    //@synthesize cancelled=_cancelled - In the implementation block
@property (getter=isFinished) BOOL finished;                                      //@synthesize finished=_finished - In the implementation block
@property (getter=isSuccessful) BOOL successful;                                  //@synthesize successful=_successful - In the implementation block
@property (nonatomic,retain) NSString * accumulatedErrorDescription;              //@synthesize accumulatedErrorDescription=_accumulatedErrorDescription - In the implementation block
@property (retain) NSThread * callbackThread;                                     //@synthesize callbackThread=_callbackThread - In the implementation block
@property (copy) id oldCompletionHandler;                                         //@synthesize oldCompletionHandler=_oldCompletionHandler - In the implementation block
@property (copy) id completionHandler;                                            //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid; 
@property (assign) int fileCompression; 
@property (copy) NSString * assetStoreVersionString;                              //@synthesize assetStoreVersionString=_assetStoreVersionString - In the implementation block
@property (assign) long long assetStoreVersionNumber;                             //@synthesize assetStoreVersionNumber=_assetStoreVersionNumber - In the implementation block
@property (retain) TDLogger * logger;                                             //@synthesize logger=_logger - In the implementation block
-(void)setIncremental:(BOOL)arg1 ;
-(id)keyFormatData;
-(id)_keyDataFromKey:(const renditionkeytoken*)arg1 ;
-(void)dealloc;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(BOOL)isCancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(NSUUID *)uuid;
-(BOOL)isFinished;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)isSuccessful;
-(void)_logError:(id)arg1 ;
-(void)_logWarning:(id)arg1 ;
-(void)_logExtra:(id)arg1 ;
-(id)initWithDocument:(id)arg1 outputPath:(id)arg2 attemptIncremental:(BOOL)arg3 versionString:(id)arg4 ;
-(void)_logInfo:(id)arg1 ;
-(void)removeRenditionsFromAssetStoreWithKey:(id)arg1 ;
-(void)setAssetStoreRenditionCount:(unsigned)arg1 ;
-(void)setAssetStoreUuid:(id)arg1 ;
-(void)setAssetStoreAssociatedChecksum:(unsigned)arg1 ;
-(void)setAssetStoreKeyFormatData:(id)arg1 ;
-(void)setAssetStoreKeySemantics:(int)arg1 ;
-(void)setAssetStorageVersion:(unsigned)arg1 ;
-(void)setAssetStorageVersionString:(const char*)arg1 ;
-(void)setAssetSchemaVersion:(unsigned)arg1 ;
-(void)setAssetColorSpaceID:(unsigned)arg1 ;
-(BOOL)assetStoreWriteToDisk;
-(void)_storeRenditions;
-(id)initWithDocument:(id)arg1 outputPath:(id)arg2 attemptIncremental:(BOOL)arg3 ;
-(long long)assetStoreVersionNumber;
-(void)setAssetStoreVersionNumber:(long long)arg1 ;
-(NSString *)assetStoreVersionString;
-(void)setAssetStoreVersionString:(NSString *)arg1 ;
-(BOOL)isIncremental;
-(void)saveAndDistillWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)accumulatedErrorDescription;
-(void)setAccumulatedErrorDescription:(NSString *)arg1 ;
-(void)_accumulateErrorDescription:(id)arg1 ;
-(BOOL)_setupWithOutputPath:(id)arg1 attemptIncremental:(BOOL)arg2 ;
-(void)setOldCompletionHandler:(id)arg1 ;
-(void)setCallbackThread:(NSThread *)arg1 ;
-(id)_filterRenditions:(id)arg1 ;
-(void)_logErrorAndAccumulateDescription:(id)arg1 ;
-(BOOL)_sortRenditionEntries;
-(void)setAsset:(id)arg1 withKey:(const renditionkeytoken*)arg2 fromRenditionSpec:(id)arg3 ;
-(id)_renditionsWithError:(id*)arg1 ;
-(id)_productionForRenditionSpec:(id)arg1 ;
-(BOOL)_distillColorDefinitions:(id)arg1 ;
-(BOOL)_distillFonts:(id)arg1 ;
-(BOOL)_distillNamedElements:(id)arg1 ;
-(id)zeroCodeArtworkInfoOfType:(long long)arg1 error:(id*)arg2 ;
-(BOOL)distillZeroCodeArtworkInfo:(id)arg1 ofType:(long long)arg2 ;
-(BOOL)distillZeroCodeArtworkInfoOfType:(long long)arg1 ;
-(BOOL)_distillCursorFacetDefinitions:(id)arg1 ;
-(void)setSuccessful:(BOOL)arg1 ;
-(void)markDistillationAsFinished;
-(void)performSelectorOnCallbackThread:(SEL)arg1 withObject:(id)arg2 waitUntilDone:(BOOL)arg3 ;
-(id)oldCompletionHandler;
-(BOOL)distillCustomFontSizes;
-(id)_keySpecsToRemoveFromKeySpecs:(id)arg1 ;
-(unsigned long long)_removeRenditionsWithKeySpecs:(id)arg1 ;
-(id)_renditionsFromProductions:(id)arg1 error:(id*)arg2 ;
-(BOOL)_recordRenditionEntryFromRendition:(id)arg1 ;
-(BOOL)sortAndStoreRenditions;
-(void)_resetDocumentUuid:(id)arg1 ;
-(void)finishDistillationWithSuccess:(BOOL)arg1 ;
-(BOOL)distillCatalogGlobals;
-(BOOL)distillCustomColors;
-(BOOL)distillCustomFonts;
-(BOOL)distillNamedElements;
-(BOOL)distillCursorFacetDefinitions;
-(BOOL)distillRenditions;
-(void)_distillChanges:(id)arg1 ;
-(void)_distill:(id)arg1 ;
-(void)waitTimerDidFire:(id)arg1 ;
-(NSThread *)callbackThread;
-(int)fileCompression;
-(void)setFileCompression:(int)arg1 ;
-(id)initWithDocument:(id)arg1 outputPath:(id)arg2 ;
-(id)initWithDocument:(id)arg1 outputPath:(id)arg2 versionString:(id)arg3 ;
-(id)documentPath;
-(id)_textureFaceExclusionPredicate;
-(id)_copyStandardEffectDefinitions;
-(BOOL)distillZeroCodeArtworkElementAndPartIdentifiers;
-(void)beginDistillWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)distillWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)cancelDistill;
-(TDLogger *)logger;
-(void)setLogger:(TDLogger *)arg1 ;
-(void)waitUntilFinished;
@end

