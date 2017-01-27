/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:03 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSIndexPath;

@interface MPPlayableContentCallbackContext : NSObject {

	BOOL _serviced;
	NSIndexPath* _indexPath;

}

@property (nonatomic,readonly) NSIndexPath * indexPath;              //@synthesize indexPath=_indexPath - In the implementation block
@property (assign,nonatomic) BOOL serviced;                          //@synthesize serviced=_serviced - In the implementation block
-(NSIndexPath *)indexPath;
-(BOOL)serviced;
-(void)setServiced:(BOOL)arg1 ;
-(id)initWithIndexPath:(id)arg1 ;
@end

