/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:03 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSSortDescriptor.h>

@class NSArray;

@interface MPModelSortDescriptor : NSSortDescriptor {

	NSArray* _keyPath;

}

@property (nonatomic,copy) NSArray * keyPath;              //@synthesize keyPath=_keyPath - In the implementation block
+(id)sortDescriptorWithKeyPath:(id)arg1 ascending:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)keyPath;
-(void)setKeyPath:(NSArray *)arg1 ;
@end

