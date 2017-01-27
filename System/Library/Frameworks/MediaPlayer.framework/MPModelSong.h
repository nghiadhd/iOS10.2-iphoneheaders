/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelObject.h>

@class NSString, MPModelAlbum, MPModelArtist, MPModelGenre, MPModelComposer, MPModelLyrics, MPModelFileAsset, NSURL;

@interface MPModelSong : MPModelObject {

	BOOL _explicitSong;
	BOOL _artistUploadedContent;
	BOOL _hasVideo;
	BOOL _homeSharingAssetAvailable;
	BOOL _shouldReportPlayEventsToStore;
	BOOL _shouldRememberBookmarkTime;
	BOOL _shouldShowComposer;
	BOOL _storeRedownloadable;
	BOOL _libraryAdded;
	BOOL _libraryAddEligible;
	BOOL _hasCloudSyncSource;
	float _volumeNormalization;
	float _userRating;
	NSString* _title;
	MPModelAlbum* _album;
	MPModelArtist* _artist;
	MPModelGenre* _genre;
	MPModelComposer* _composer;
	NSString* _grouping;
	double _duration;
	long long _trackNumber;
	long long _discNumber;
	long long _beatsPerMinute;
	MPModelLyrics* _lyrics;
	NSString* _copyrightText;
	MPModelFileAsset* _localFileAsset;
	NSURL* _localNetworkFileURL;
	long long _playbackEndpointType;
	NSString* _protectedContentSupportStorageFilePath;
	NSString* _storeRedownloadParameters;
	unsigned long long _storeAccountIdentifier;
	long long _year;
	NSString* _classicalWork;
	NSString* _classicalMovement;
	long long _classicalMovementCount;
	long long _classicalMovementNumber;
	long long _keepLocalEnableState;
	long long _keepLocalManagedStatus;
	/*^block*/id _artworkCatalogBlock;

}

@property (nonatomic,copy) NSString * title;                                                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) MPModelAlbum * album;                                                           //@synthesize album=_album - In the implementation block
@property (nonatomic,retain) MPModelArtist * artist;                                                         //@synthesize artist=_artist - In the implementation block
@property (nonatomic,retain) MPModelGenre * genre;                                                           //@synthesize genre=_genre - In the implementation block
@property (nonatomic,retain) MPModelComposer * composer;                                                     //@synthesize composer=_composer - In the implementation block
@property (nonatomic,copy) NSString * grouping;                                                              //@synthesize grouping=_grouping - In the implementation block
@property (nonatomic,retain) MPModelFileAsset * localFileAsset;                                              //@synthesize localFileAsset=_localFileAsset - In the implementation block
@property (nonatomic,copy) NSString * copyrightText;                                                         //@synthesize copyrightText=_copyrightText - In the implementation block
@property (assign,nonatomic) double duration;                                                                //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) long long trackNumber;                                                          //@synthesize trackNumber=_trackNumber - In the implementation block
@property (assign,nonatomic) long long discNumber;                                                           //@synthesize discNumber=_discNumber - In the implementation block
@property (assign,getter=isExplicitSong,nonatomic) BOOL explicitSong;                                        //@synthesize explicitSong=_explicitSong - In the implementation block
@property (assign,getter=isArtistUploadedContent,nonatomic) BOOL artistUploadedContent;                      //@synthesize artistUploadedContent=_artistUploadedContent - In the implementation block
@property (assign,nonatomic) BOOL hasVideo;                                                                  //@synthesize hasVideo=_hasVideo - In the implementation block
@property (assign,nonatomic) long long beatsPerMinute;                                                       //@synthesize beatsPerMinute=_beatsPerMinute - In the implementation block
@property (nonatomic,retain) MPModelLyrics * lyrics;                                                         //@synthesize lyrics=_lyrics - In the implementation block
@property (assign,getter=isHomeSharingAssetAvailable,nonatomic) BOOL homeSharingAssetAvailable;              //@synthesize homeSharingAssetAvailable=_homeSharingAssetAvailable - In the implementation block
@property (nonatomic,copy) NSURL * localNetworkFileURL;                                                      //@synthesize localNetworkFileURL=_localNetworkFileURL - In the implementation block
@property (assign,nonatomic) long long playbackEndpointType;                                                 //@synthesize playbackEndpointType=_playbackEndpointType - In the implementation block
@property (nonatomic,copy) NSString * protectedContentSupportStorageFilePath;                                //@synthesize protectedContentSupportStorageFilePath=_protectedContentSupportStorageFilePath - In the implementation block
@property (assign,nonatomic) BOOL shouldRememberBookmarkTime;                                                //@synthesize shouldRememberBookmarkTime=_shouldRememberBookmarkTime - In the implementation block
@property (assign,nonatomic) BOOL shouldReportPlayEventsToStore;                                             //@synthesize shouldReportPlayEventsToStore=_shouldReportPlayEventsToStore - In the implementation block
@property (assign,nonatomic) BOOL shouldShowComposer;                                                        //@synthesize shouldShowComposer=_shouldShowComposer - In the implementation block
@property (assign,getter=isStoreRedownloadable,nonatomic) BOOL storeRedownloadable;                          //@synthesize storeRedownloadable=_storeRedownloadable - In the implementation block
@property (assign,nonatomic) unsigned long long storeAccountIdentifier;                                      //@synthesize storeAccountIdentifier=_storeAccountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * storeRedownloadParameters;                                             //@synthesize storeRedownloadParameters=_storeRedownloadParameters - In the implementation block
@property (assign,nonatomic) float volumeNormalization;                                                      //@synthesize volumeNormalization=_volumeNormalization - In the implementation block
@property (nonatomic,copy) id artworkCatalogBlock;                                                           //@synthesize artworkCatalogBlock=_artworkCatalogBlock - In the implementation block
@property (assign,nonatomic) BOOL hasCloudSyncSource;                                                        //@synthesize hasCloudSyncSource=_hasCloudSyncSource - In the implementation block
@property (assign,getter=isLibraryAdded,nonatomic) BOOL libraryAdded;                                        //@synthesize libraryAdded=_libraryAdded - In the implementation block
@property (assign,getter=isLibraryAddEligible,nonatomic) BOOL libraryAddEligible;                            //@synthesize libraryAddEligible=_libraryAddEligible - In the implementation block
@property (assign,nonatomic) long long keepLocalEnableState;                                                 //@synthesize keepLocalEnableState=_keepLocalEnableState - In the implementation block
@property (assign,nonatomic) long long keepLocalManagedStatus;                                               //@synthesize keepLocalManagedStatus=_keepLocalManagedStatus - In the implementation block
@property (assign,nonatomic) long long year;                                                                 //@synthesize year=_year - In the implementation block
@property (assign,nonatomic) float userRating;                                                               //@synthesize userRating=_userRating - In the implementation block
@property (nonatomic,copy) NSString * classicalWork;                                                         //@synthesize classicalWork=_classicalWork - In the implementation block
@property (nonatomic,copy) NSString * classicalMovement;                                                     //@synthesize classicalMovement=_classicalMovement - In the implementation block
@property (assign,nonatomic) long long classicalMovementCount;                                               //@synthesize classicalMovementCount=_classicalMovementCount - In the implementation block
@property (assign,nonatomic) long long classicalMovementNumber;                                              //@synthesize classicalMovementNumber=_classicalMovementNumber - In the implementation block
+(BOOL)supportsKeepLocalStatusObservation;
+(id)requiredKeepLocalStatusObservationProperties;
+(id)__title__KEY;
+(id)__MPModelPropertySongTitle__PROPERTY;
+(id)__album__KEY;
+(id)__MPModelRelationshipSongAlbum__PROPERTY;
+(id)__artist__KEY;
+(id)__MPModelRelationshipSongArtist__PROPERTY;
+(id)__genre__KEY;
+(id)__MPModelRelationshipSongGenre__PROPERTY;
+(id)__composer__KEY;
+(id)__MPModelRelationshipSongComposer__PROPERTY;
+(id)__grouping__KEY;
+(id)__MPModelPropertySongGrouping__PROPERTY;
+(id)__copyrightText__KEY;
+(id)__MPModelPropertySongCopyrightText__PROPERTY;
+(id)__duration__KEY;
+(id)__MPModelPropertySongDuration__PROPERTY;
+(id)__trackNumber__KEY;
+(id)__MPModelPropertySongTrackNumber__PROPERTY;
+(id)__discNumber__KEY;
+(id)__MPModelPropertySongDiscNumber__PROPERTY;
+(id)__explicitSong__KEY;
+(id)__MPModelPropertySongExplicit__PROPERTY;
+(id)__artistUploadedContent__KEY;
+(id)__MPModelPropertySongArtistUploadedContent__PROPERTY;
+(id)__hasVideo__KEY;
+(id)__MPModelPropertySongHasVideo__PROPERTY;
+(id)__beatsPerMinute__KEY;
+(id)__MPModelPropertySongBeatsPerMinute__PROPERTY;
+(id)__lyrics__KEY;
+(id)__MPModelRelationshipSongLyrics__PROPERTY;
+(id)__localNetworkFileURL__KEY;
+(id)__MPModelPropertySongLocalNetworkFileURL__PROPERTY;
+(id)__homeSharingAssetAvailable__KEY;
+(id)__MPModelPropertySongHomeSharingAssetAvailable__PROPERTY;
+(id)__playbackEndpointType__KEY;
+(id)__MPModelPropertySongPlaybackEndpointType__PROPERTY;
+(id)__protectedContentSupportStorageFilePath__KEY;
+(id)__MPModelPropertySongProtectedContentSupportStorageFilePath__PROPERTY;
+(id)__storeRedownloadParameters__KEY;
+(id)__MPModelPropertySongStoreRedownloadParameters__PROPERTY;
+(id)__storeAccountIdentifier__KEY;
+(id)__MPModelPropertySongStoreAccountIdentifier__PROPERTY;
+(id)__shouldReportPlayEventsToStore__KEY;
+(id)__MPModelPropertySongShouldReportPlayEventsToStore__PROPERTY;
+(id)__shouldShowComposer__KEY;
+(id)__MPModelPropertySongShouldShowComposer__PROPERTY;
+(id)__storeRedownloadable__KEY;
+(id)__MPModelPropertySongStoreRedownloadable__PROPERTY;
+(id)__volumeNormalization__KEY;
+(id)__MPModelPropertySongVolumeNormalization__PROPERTY;
+(id)__libraryAdded__KEY;
+(id)__MPModelPropertySongLibraryAdded__PROPERTY;
+(id)__artworkCatalogBlock__KEY;
+(id)__MPModelPropertySongArtwork__PROPERTY;
+(id)__localFileAsset__KEY;
+(id)__MPModelRelationshipSongLocalFileAsset__PROPERTY;
+(id)__keepLocalEnableState__KEY;
+(id)__MPModelPropertySongKeepLocalEnableState__PROPERTY;
+(id)__keepLocalManagedStatus__KEY;
+(id)__MPModelPropertySongKeepLocalManagedStatus__PROPERTY;
+(id)__libraryAddEligible__KEY;
+(id)__MPModelPropertySongLibraryAddEligible__PROPERTY;
+(id)__hasCloudSyncSource__KEY;
+(id)__MPModelPropertySongHasCloudSyncSource__PROPERTY;
+(id)__classicalWork__KEY;
+(id)__MPModelPropertySongClassicalWork__PROPERTY;
+(id)__classicalMovement__KEY;
+(id)__MPModelPropertySongClassicalMovement__PROPERTY;
+(id)__classicalMovementCount__KEY;
+(id)__MPModelPropertySongClassicalMovementCount__PROPERTY;
+(id)__classicalMovementNumber__KEY;
+(id)__MPModelPropertySongClassicalMovementNumber__PROPERTY;
+(id)__shouldRememberBookmarkTime__KEY;
+(id)__MPModelPropertySongShouldRememberBookmarkTime__PROPERTY;
+(id)__year__KEY;
+(id)__MPModelPropertySongYear__PROPERTY;
+(id)__userRating__KEY;
+(id)__MPModelPropertySongUserRating__PROPERTY;
+(id)requiredLibraryAddStatusObservationProperties;
+(BOOL)supportsLibraryAddStatusObservation;
+(id)requiredStoreLibraryPersonalizationProperties;
+(id)requiredLibraryRemovalProperties;
+(BOOL)supportsLibraryRemoval;
-(id)_radioStationMatchMetadata;
-(void)setTitle:(NSString *)arg1 ;
-(double)duration;
-(NSString *)title;
-(void)setDuration:(double)arg1 ;
-(long long)year;
-(void)setYear:(long long)arg1 ;
-(id)descriptionWithType:(long long)arg1 ;
-(MPModelLyrics *)lyrics;
-(MPModelArtist *)artist;
-(MPModelComposer *)composer;
-(long long)discNumber;
-(MPModelGenre *)genre;
-(NSString *)copyrightText;
-(long long)trackNumber;
-(id)artworkCatalog;
-(void)setArtworkCatalogBlock:(id)arg1 ;
-(id)artworkCatalogBlock;
-(void)setArtist:(MPModelArtist *)arg1 ;
-(void)setGenre:(MPModelGenre *)arg1 ;
-(void)setComposer:(MPModelComposer *)arg1 ;
-(void)setTrackNumber:(long long)arg1 ;
-(void)setDiscNumber:(long long)arg1 ;
-(BOOL)isExplicitSong;
-(void)setExplicitSong:(BOOL)arg1 ;
-(BOOL)isArtistUploadedContent;
-(void)setArtistUploadedContent:(BOOL)arg1 ;
-(BOOL)hasVideo;
-(void)setHasVideo:(BOOL)arg1 ;
-(long long)beatsPerMinute;
-(void)setBeatsPerMinute:(long long)arg1 ;
-(void)setLyrics:(MPModelLyrics *)arg1 ;
-(void)setCopyrightText:(NSString *)arg1 ;
-(MPModelFileAsset *)localFileAsset;
-(void)setLocalFileAsset:(MPModelFileAsset *)arg1 ;
-(NSURL *)localNetworkFileURL;
-(void)setLocalNetworkFileURL:(NSURL *)arg1 ;
-(BOOL)isHomeSharingAssetAvailable;
-(void)setHomeSharingAssetAvailable:(BOOL)arg1 ;
-(long long)playbackEndpointType;
-(void)setPlaybackEndpointType:(long long)arg1 ;
-(NSString *)protectedContentSupportStorageFilePath;
-(void)setProtectedContentSupportStorageFilePath:(NSString *)arg1 ;
-(NSString *)storeRedownloadParameters;
-(void)setStoreRedownloadParameters:(NSString *)arg1 ;
-(BOOL)shouldReportPlayEventsToStore;
-(void)setShouldReportPlayEventsToStore:(BOOL)arg1 ;
-(BOOL)shouldRememberBookmarkTime;
-(void)setShouldRememberBookmarkTime:(BOOL)arg1 ;
-(BOOL)shouldShowComposer;
-(void)setShouldShowComposer:(BOOL)arg1 ;
-(BOOL)isStoreRedownloadable;
-(void)setStoreRedownloadable:(BOOL)arg1 ;
-(float)volumeNormalization;
-(void)setVolumeNormalization:(float)arg1 ;
-(NSString *)classicalWork;
-(void)setClassicalWork:(NSString *)arg1 ;
-(NSString *)classicalMovement;
-(void)setClassicalMovement:(NSString *)arg1 ;
-(long long)classicalMovementCount;
-(void)setClassicalMovementCount:(long long)arg1 ;
-(long long)classicalMovementNumber;
-(void)setClassicalMovementNumber:(long long)arg1 ;
-(BOOL)isLibraryAdded;
-(void)setLibraryAdded:(BOOL)arg1 ;
-(BOOL)isLibraryAddEligible;
-(void)setLibraryAddEligible:(BOOL)arg1 ;
-(BOOL)hasCloudSyncSource;
-(void)setHasCloudSyncSource:(BOOL)arg1 ;
-(long long)keepLocalEnableState;
-(void)setKeepLocalEnableState:(long long)arg1 ;
-(long long)keepLocalManagedStatus;
-(void)setKeepLocalManagedStatus:(long long)arg1 ;
-(MPLibraryAddStatusObserverConfiguration)libraryAddStatusObserverConfiguration;
-(id)newKeepLocalStatusObserverConfiguration;
-(id)relativeModelObjectForStoreLibraryPersonalization;
-(id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1 ;
-(id)personalizationScopedPropertiesForProperties:(id)arg1 ;
-(long long)libraryRemovalSupportedOptions;
-(float)userRating;
-(void)setUserRating:(float)arg1 ;
-(void)setStoreAccountIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)storeAccountIdentifier;
-(MPModelAlbum *)album;
-(void)setAlbum:(MPModelAlbum *)arg1 ;
-(id)propertyValues;
-(NSString *)grouping;
-(void)setGrouping:(NSString *)arg1 ;
@end

