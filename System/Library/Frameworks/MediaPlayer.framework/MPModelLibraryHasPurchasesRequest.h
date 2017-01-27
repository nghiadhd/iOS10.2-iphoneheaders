/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class MPModelObject, MPMediaLibrary;

@interface MPModelLibraryHasPurchasesRequest : NSObject {

	MPModelObject* _modelObject;
	MPMediaLibrary* _mediaLibrary;

}

@property (nonatomic,retain) MPModelObject * modelObject;                //@synthesize modelObject=_modelObject - In the implementation block
@property (nonatomic,retain) MPMediaLibrary * mediaLibrary;              //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMediaLibrary:(MPMediaLibrary *)arg1 ;
-(MPModelObject *)modelObject;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(void)setModelObject:(MPModelObject *)arg1 ;
-(MPMediaLibrary *)mediaLibrary;
@end

