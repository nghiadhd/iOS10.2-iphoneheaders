/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class NSString, AVOutputSettings, NSDictionary, NSArray, NSURL;

@interface AVAssetWriterInputConfigurationState : NSObject {

	NSString* _mediaType;
	AVOutputSettings* _outputSettings;
	opaqueCMFormatDescriptionRef _sourceFormatHint;
	int _trackID;
	NSDictionary* _sourcePixelBufferAttributes;
	NSArray* _metadataItems;
	CGAffineTransform _transform;
	int _mediaTimeScale;
	BOOL _expectsMediaDataInRealTime;
	CGSize _naturalSize;
	NSString* _languageCode;
	NSString* _extendedLanguageTag;
	BOOL _marksOutputTrackAsEnabled;
	float _preferredVolume;
	long long _layer;
	short _alternateGroupID;
	short _provisionalAlternateGroupID;
	NSDictionary* _trackReferences;
	BOOL _performsMultiPassEncodingIfSupported;
	SCD_Struct_AV2 _chunkDuration;
	long long _chunkAlignment;
	long long _chunkSize;
	BOOL _writesMediaDataToBeginningOfFile;
	NSURL* _sampleReferenceBaseURL;

}

@property (nonatomic,copy) NSString * mediaType;                                         //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,copy) AVOutputSettings * outputSettings;                            //@synthesize outputSettings=_outputSettings - In the implementation block
@property (nonatomic,retain) opaqueCMFormatDescriptionRef sourceFormatHint;              //@synthesize sourceFormatHint=_sourceFormatHint - In the implementation block
@property (assign,nonatomic) int trackID;                                                //@synthesize trackID=_trackID - In the implementation block
@property (nonatomic,copy) NSDictionary * sourcePixelBufferAttributes;                   //@synthesize sourcePixelBufferAttributes=_sourcePixelBufferAttributes - In the implementation block
@property (nonatomic,copy) NSArray * metadataItems;                                      //@synthesize metadataItems=_metadataItems - In the implementation block
@property (assign,nonatomic) CGAffineTransform transform;                                //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) int mediaTimeScale;                                         //@synthesize mediaTimeScale=_mediaTimeScale - In the implementation block
@property (assign,nonatomic) BOOL expectsMediaDataInRealTime;                            //@synthesize expectsMediaDataInRealTime=_expectsMediaDataInRealTime - In the implementation block
@property (assign,nonatomic) CGSize naturalSize;                                         //@synthesize naturalSize=_naturalSize - In the implementation block
@property (nonatomic,copy) NSString * languageCode;                                      //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,copy) NSString * extendedLanguageTag;                               //@synthesize extendedLanguageTag=_extendedLanguageTag - In the implementation block
@property (assign,nonatomic) BOOL marksOutputTrackAsEnabled;                             //@synthesize marksOutputTrackAsEnabled=_marksOutputTrackAsEnabled - In the implementation block
@property (assign,nonatomic) float preferredVolume;                                      //@synthesize preferredVolume=_preferredVolume - In the implementation block
@property (assign,nonatomic) long long layer;                                            //@synthesize layer=_layer - In the implementation block
@property (assign,nonatomic) short alternateGroupID;                                     //@synthesize alternateGroupID=_alternateGroupID - In the implementation block
@property (assign,nonatomic) short provisionalAlternateGroupID;                          //@synthesize provisionalAlternateGroupID=_provisionalAlternateGroupID - In the implementation block
@property (nonatomic,copy) NSDictionary * trackReferences;                               //@synthesize trackReferences=_trackReferences - In the implementation block
@property (assign,nonatomic) BOOL performsMultiPassEncodingIfSupported;                  //@synthesize performsMultiPassEncodingIfSupported=_performsMultiPassEncodingIfSupported - In the implementation block
@property (assign,nonatomic) SCD_Struct_AV2 preferredMediaChunkDuration;                 //@synthesize chunkDuration=_chunkDuration - In the implementation block
@property (assign,nonatomic) long long preferredMediaChunkAlignment;                     //@synthesize chunkAlignment=_chunkAlignment - In the implementation block
@property (assign,nonatomic) long long preferredMediaChunkSize;                          //@synthesize chunkSize=_chunkSize - In the implementation block
@property (assign,nonatomic) BOOL writesMediaDataToBeginningOfFile;                      //@synthesize writesMediaDataToBeginningOfFile=_writesMediaDataToBeginningOfFile - In the implementation block
@property (nonatomic,copy) NSURL * sampleReferenceBaseURL;                               //@synthesize sampleReferenceBaseURL=_sampleReferenceBaseURL - In the implementation block
-(long long)layer;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)dealloc;
-(void)setLayer:(long long)arg1 ;
-(CGAffineTransform)transform;
-(AVOutputSettings *)outputSettings;
-(NSString *)languageCode;
-(CGSize)naturalSize;
-(void)setOutputSettings:(AVOutputSettings *)arg1 ;
-(void)setExtendedLanguageTag:(NSString *)arg1 ;
-(float)preferredVolume;
-(short)alternateGroupID;
-(short)provisionalAlternateGroupID;
-(void)setPreferredVolume:(float)arg1 ;
-(void)setAlternateGroupID:(short)arg1 ;
-(NSArray *)metadataItems;
-(void)setMetadataItems:(NSArray *)arg1 ;
-(opaqueCMFormatDescriptionRef)sourceFormatHint;
-(void)setMarksOutputTrackAsEnabled:(BOOL)arg1 ;
-(BOOL)expectsMediaDataInRealTime;
-(BOOL)marksOutputTrackAsEnabled;
-(void)setSourceFormatHint:(opaqueCMFormatDescriptionRef)arg1 ;
-(NSDictionary *)sourcePixelBufferAttributes;
-(void)setSourcePixelBufferAttributes:(NSDictionary *)arg1 ;
-(int)mediaTimeScale;
-(void)setMediaTimeScale:(int)arg1 ;
-(void)setExpectsMediaDataInRealTime:(BOOL)arg1 ;
-(void)setProvisionalAlternateGroupID:(short)arg1 ;
-(void)setTrackReferences:(NSDictionary *)arg1 ;
-(BOOL)performsMultiPassEncodingIfSupported;
-(SCD_Struct_AV2)preferredMediaChunkDuration;
-(void)setPreferredMediaChunkDuration:(SCD_Struct_AV2)arg1 ;
-(long long)preferredMediaChunkAlignment;
-(void)setPreferredMediaChunkAlignment:(long long)arg1 ;
-(long long)preferredMediaChunkSize;
-(void)setPreferredMediaChunkSize:(long long)arg1 ;
-(BOOL)writesMediaDataToBeginningOfFile;
-(void)setWritesMediaDataToBeginningOfFile:(BOOL)arg1 ;
-(NSURL *)sampleReferenceBaseURL;
-(void)setSampleReferenceBaseURL:(NSURL *)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(NSDictionary *)trackReferences;
-(NSString *)extendedLanguageTag;
-(int)trackID;
-(NSString *)mediaType;
-(void)setMediaType:(NSString *)arg1 ;
-(void)setTrackID:(int)arg1 ;
-(void)setNaturalSize:(CGSize)arg1 ;
-(void)setPerformsMultiPassEncodingIfSupported:(BOOL)arg1 ;
@end

