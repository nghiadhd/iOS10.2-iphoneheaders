/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKImageSet, NSLock, PKContent, NSString, NSData, PKDataAccessor, PKDisplayProfile, NSURL;

@interface PKObject : NSObject <NSCopying, NSSecureCoding> {

	PKImageSet* _imageSets[6];
	NSLock* _imageSetLock;
	BOOL _initializedViaInitWithCoder;
	PKContent* _content;
	NSString* _uniqueID;
	NSData* _manifestHash;
	PKDataAccessor* _dataAccessor;
	PKDisplayProfile* _displayProfile;
	double _preferredImageScale;
	NSString* _preferredImageSuffix;
	NSURL* _webServiceURL;
	NSString* _authenticationToken;
	unsigned long long _settings;
	long long _shareCount;

}

@property (nonatomic,retain) PKContent * content;                             //@synthesize content=_content - In the implementation block
@property (nonatomic,copy) NSString * uniqueID;                               //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,copy) NSData * manifestHash;                             //@synthesize manifestHash=_manifestHash - In the implementation block
@property (nonatomic,retain) PKDataAccessor * dataAccessor;                   //@synthesize dataAccessor=_dataAccessor - In the implementation block
@property (nonatomic,retain) PKDisplayProfile * displayProfile;               //@synthesize displayProfile=_displayProfile - In the implementation block
@property (assign,nonatomic) double preferredImageScale;                      //@synthesize preferredImageScale=_preferredImageScale - In the implementation block
@property (nonatomic,retain) NSString * preferredImageSuffix;                 //@synthesize preferredImageSuffix=_preferredImageSuffix - In the implementation block
@property (nonatomic,copy) NSURL * webServiceURL;                             //@synthesize webServiceURL=_webServiceURL - In the implementation block
@property (nonatomic,copy) NSString * authenticationToken;                    //@synthesize authenticationToken=_authenticationToken - In the implementation block
@property (assign,nonatomic) unsigned long long settings;                     //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic) long long shareCount;                            //@synthesize shareCount=_shareCount - In the implementation block
@property (nonatomic,readonly) BOOL remoteAssetsDownloaded; 
@property (nonatomic,readonly) BOOL initializedViaInitWithCoder;              //@synthesize initializedViaInitWithCoder=_initializedViaInitWithCoder - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned long long)defaultSettings;
+(BOOL)isValidObjectWithFileURL:(id)arg1 warnings:(id*)arg2 orError:(id*)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)settings;
-(PKContent *)content;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)archiveData;
-(void)setSettings:(unsigned long long)arg1 ;
-(double)preferredImageScale;
-(void)setContent:(PKContent *)arg1 ;
-(NSString *)uniqueID;
-(long long)shareCount;
-(void)setShareCount:(long long)arg1 ;
-(void)setUniqueID:(NSString *)arg1 ;
-(BOOL)isContentLoaded;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(id)modificationDate;
-(void)revocationStatusWithCompletion:(/*^block*/id)arg1 ;
-(id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2 ;
-(id)serializedFileWrapper;
-(BOOL)remoteAssetsDownloaded;
-(void)setDataAccessor:(PKDataAccessor *)arg1 ;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 ;
-(BOOL)initializedViaInitWithCoder;
-(id)contentLoadedIfNeeded;
-(void)setManifestHash:(NSData *)arg1 ;
-(id)initWithData:(id)arg1 warnings:(id*)arg2 orError:(id*)arg3 ;
-(id)initWithFileDataAccessor:(id)arg1 ;
-(id)initWithFileURL:(id)arg1 warnings:(id*)arg2 orError:(id*)arg3 ;
-(NSString *)preferredImageSuffix;
-(void)setDisplayProfile:(PKDisplayProfile *)arg1 ;
-(id)imageSetLoadedIfNeeded:(long long)arg1 ;
-(void)setWebServiceURL:(NSURL *)arg1 ;
-(void)setAuthenticationToken:(NSString *)arg1 ;
-(NSString *)authenticationToken;
-(void)flushLoadedContent;
-(void)flushLoadedImageSets;
-(void)updateImageSetForURL:(id)arg1 withCacheURL:(id)arg2 ;
-(void)reloadDisplayProfileOfType:(long long)arg1 ;
-(BOOL)isImageSetType:(long long)arg1 equalToImageSetTypeFromObject:(id)arg2 ;
-(void)setMissingImageSetsFromObject:(id)arg1 ;
-(void)setPreferredImageScale:(double)arg1 ;
-(void)setPreferredImageSuffix:(NSString *)arg1 ;
-(void)loadContentSync;
-(id)localizedString:(id)arg1 ;
-(PKDisplayProfile *)displayProfile;
-(BOOL)isImageSetLoaded:(long long)arg1 ;
-(void)loadImageSetAsync:(long long)arg1 preheat:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)flushFormattedFieldValues;
-(void)requestUpdateWithCompletion:(/*^block*/id)arg1 ;
-(NSURL *)webServiceURL;
-(PKDataAccessor *)dataAccessor;
-(void)setSettingsWithoutUpdatingDataAccessor:(unsigned long long)arg1 ;
-(void)loadImageSetSync:(long long)arg1 preheat:(BOOL)arg2 ;
-(void)downloadRemoteAssetsWithCompletion:(/*^block*/id)arg1 ;
-(void)noteShared;
-(void)loadContentAsyncWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithFileURL:(id)arg1 error:(id*)arg2 ;
-(NSData *)manifestHash;
@end

