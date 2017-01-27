/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOMapItemPhoto.h>

@class NSString, NSURL, GEOPhoto, GEOPDCaptionedPhoto;

@interface _GEOPlaceDataCaptionedPhoto : NSObject <GEOMapItemPhoto> {

	GEOPDCaptionedPhoto* _captionedPhoto;
	GEOPhoto* _geoPhoto;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * author; 
@property (nonatomic,readonly) NSString * caption; 
@property (nonatomic,readonly) NSString * licenseDescription; 
@property (nonatomic,readonly) NSURL * licenseURL; 
@property (nonatomic,readonly) BOOL displayFullPhotoInline; 
@property (nonatomic,readonly) GEOPhoto * geoPhoto;                        //@synthesize geoPhoto=_geoPhoto - In the implementation block
-(void)dealloc;
-(NSString *)author;
-(NSString *)caption;
-(NSString *)licenseDescription;
-(NSURL *)licenseURL;
-(BOOL)displayFullPhotoInline;
-(GEOPhoto *)geoPhoto;
-(id)initWithCaptionedPhoto:(id)arg1 ;
@end

