/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPSpecializationMetadata.h>
#import <libobjc.A.dylib/LPLinkMetadataPresentationTransformerAdaptor.h>
#import <libobjc.A.dylib/LPLinkMetadataPreviewTransformerAdaptor.h>
#import <libobjc.A.dylib/LPLinkMetadataStoreTransformerAdaptor.h>
#import <libobjc.A.dylib/LPLinkMetadataStatusTransformerAdaptor.h>

@class NSString, LPImage, LPArtworkMetadata, NSURL, NSArray;

@interface LPiTunesMediaSongMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformerAdaptor, LPLinkMetadataPreviewTransformerAdaptor, LPLinkMetadataStoreTransformerAdaptor, LPLinkMetadataStatusTransformerAdaptor> {

	NSString* _storeFrontIdentifier;
	NSString* _storeIdentifier;
	NSString* _name;
	NSString* _artist;
	NSString* _album;
	NSString* _lyrics;
	LPImage* _artwork;
	LPArtworkMetadata* _artworkMetadata;
	NSURL* _previewURL;
	NSArray* _offers;

}

@property (nonatomic,copy) NSString * storeFrontIdentifier;                  //@synthesize storeFrontIdentifier=_storeFrontIdentifier - In the implementation block
@property (nonatomic,copy) NSString * storeIdentifier;                       //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * artist;                                //@synthesize artist=_artist - In the implementation block
@property (nonatomic,copy) NSString * album;                                 //@synthesize album=_album - In the implementation block
@property (nonatomic,copy) NSString * lyrics;                                //@synthesize lyrics=_lyrics - In the implementation block
@property (nonatomic,retain) LPImage * artwork;                              //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,copy) LPArtworkMetadata * artworkMetadata;              //@synthesize artworkMetadata=_artworkMetadata - In the implementation block
@property (nonatomic,copy) NSURL * previewURL;                               //@synthesize previewURL=_previewURL - In the implementation block
@property (nonatomic,copy) NSArray * offers;                                 //@synthesize offers=_offers - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)transcriptBoldTextFont;
+(id)statusForText:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(LPImage *)artwork;
-(void)setArtwork:(LPImage *)arg1 ;
-(void)setOffers:(NSArray *)arg1 ;
-(NSString *)lyrics;
-(NSString *)artist;
-(void)setArtist:(NSString *)arg1 ;
-(void)setLyrics:(NSString *)arg1 ;
-(void)setStoreFrontIdentifier:(NSString *)arg1 ;
-(NSString *)storeIdentifier;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(NSArray *)offers;
-(NSString *)storeFrontIdentifier;
-(NSString *)album;
-(void)setAlbum:(NSString *)arg1 ;
-(NSURL *)previewURL;
-(void)setPreviewURL:(NSURL *)arg1 ;
-(id)previewSummaryForTransformer:(id)arg1 ;
-(id)previewImageForTransformer:(id)arg1 ;
-(LPArtworkMetadata *)artworkMetadata;
-(void)setArtworkMetadata:(LPArtworkMetadata *)arg1 ;
-(void)initializeForTransformer:(id)arg1 ;
-(void)destroyForTransformer:(id)arg1 ;
-(id)statusForTransformer:(id)arg1 ;
-(id)actionURLForTransformer:(id)arg1 ;
-(id)presentationPropertiesForTransformer:(id)arg1 ;
-(id)iTunesPlaybackInformationForURL:(id)arg1 ;
-(id)storeIdentifierForTransformer:(id)arg1 ;
@end

