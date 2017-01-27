/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelResponse.h>
#import <libobjc.A.dylib/MPModelResponseDetailedKeepLocalStatusRequesting.h>

@class MPSectionedCollection, MPModelResponse, NSString;

@interface MPStoreLibraryPersonalizationResponse : MPModelResponse <MPModelResponseDetailedKeepLocalStatusRequesting> {

	MPSectionedCollection* _representedObjectResults;
	MPModelResponse* _libraryResponse;

}

@property (nonatomic,retain) MPSectionedCollection * representedObjectResults;              //@synthesize representedObjectResults=_representedObjectResults - In the implementation block
@property (nonatomic,retain) MPModelResponse * libraryResponse;                             //@synthesize libraryResponse=_libraryResponse - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)newOperationForDetailedKeepLocalStatusConfigurationForSectionAtIndex:(long long)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)setLibraryResponse:(MPModelResponse *)arg1 ;
-(void)setRepresentedObjectResults:(MPSectionedCollection *)arg1 ;
-(void)_libraryResponseDidInvalidateNotification:(id)arg1 ;
-(MPSectionedCollection *)representedObjectResults;
-(MPModelResponse *)libraryResponse;
@end

