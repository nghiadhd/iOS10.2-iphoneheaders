/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPSectionedCollection;

@interface MPModelLibraryImportChangeRequest : NSObject <NSCopying> {

	BOOL _shouldLibraryAdd;
	MPSectionedCollection* _modelObjects;

}

@property (nonatomic,copy) MPSectionedCollection * modelObjects;              //@synthesize modelObjects=_modelObjects - In the implementation block
@property (assign,nonatomic) BOOL shouldLibraryAdd;                           //@synthesize shouldLibraryAdd=_shouldLibraryAdd - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(BOOL)shouldLibraryAdd;
-(void)setShouldLibraryAdd:(BOOL)arg1 ;
-(MPSectionedCollection *)modelObjects;
-(void)setModelObjects:(MPSectionedCollection *)arg1 ;
@end

