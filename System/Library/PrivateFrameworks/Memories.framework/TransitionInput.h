/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Memories/Memories-Structs.h>
@class KonaClip;

@interface TransitionInput : NSObject {

	int _ID;
	KonaClip* _clip;
	CGSize _naturalSize;
	CGAffineTransform _transform;

}

@property (assign,nonatomic) int ID;                                   //@synthesize ID=_ID - In the implementation block
@property (assign,nonatomic) CGAffineTransform transform;              //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) CGSize naturalSize;                       //@synthesize naturalSize=_naturalSize - In the implementation block
@property (assign,nonatomic) KonaClip * clip;                          //@synthesize clip=_clip - In the implementation block
-(void)setTransform:(CGAffineTransform)arg1 ;
-(id)description;
-(KonaClip *)clip;
-(CGAffineTransform)transform;
-(void)setClip:(KonaClip *)arg1 ;
-(CGSize)naturalSize;
-(int)ID;
-(void)setID:(int)arg1 ;
-(void)setNaturalSize:(CGSize)arg1 ;
@end

