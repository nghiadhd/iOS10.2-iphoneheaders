/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSKeyedArchiver.h>

@class NSDictionary;

@interface SCNKeyedArchiver : NSKeyedArchiver {

	NSDictionary* options;

}

@property (nonatomic,copy) NSDictionary * options; 
+(id)archivedDataWithRootObject:(id)arg1 options:(id)arg2 ;
-(void)dealloc;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
@end

