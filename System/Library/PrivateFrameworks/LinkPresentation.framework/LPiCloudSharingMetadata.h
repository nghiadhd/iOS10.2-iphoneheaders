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

@class NSString, LPImage;

@interface LPiCloudSharingMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformerAdaptor, LPLinkMetadataPreviewTransformerAdaptor> {

	NSString* _applicationBundleIdenfier;
	NSString* _application;
	NSString* _title;
	LPImage* _icon;

}

@property (nonatomic,copy) NSString * applicationBundleIdenfier;              //@synthesize applicationBundleIdenfier=_applicationBundleIdenfier - In the implementation block
@property (nonatomic,copy) NSString * application;                            //@synthesize application=_application - In the implementation block
@property (nonatomic,copy) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) LPImage * icon;                                  //@synthesize icon=_icon - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIcon:(LPImage *)arg1 ;
-(NSString *)application;
-(void)setApplication:(NSString *)arg1 ;
-(LPImage *)icon;
-(id)previewSummaryForTransformer:(id)arg1 ;
-(id)previewImageForTransformer:(id)arg1 ;
-(NSString *)applicationBundleIdenfier;
-(void)setApplicationBundleIdenfier:(NSString *)arg1 ;
-(id)computeIcon;
-(id)computeLocalizedApplicationName;
-(id)presentationPropertiesForTransformer:(id)arg1 ;
@end

