/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:58 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKProducerBundle.h>

@class OKProducerPlugin;

@interface OKProducerContent : OKProducerBundle {

	OKProducerPlugin* _plugin;

}

@property (assign,nonatomic) OKProducerPlugin * plugin;              //@synthesize plugin=_plugin - In the implementation block
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(BOOL)isLoaded;
-(OKProducerPlugin *)plugin;
-(void)setPlugin:(OKProducerPlugin *)arg1 ;
@end

