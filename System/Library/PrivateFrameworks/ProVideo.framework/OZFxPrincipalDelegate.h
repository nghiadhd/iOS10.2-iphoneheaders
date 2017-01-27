/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/FxPlugPrincipalDelegate.h>
#import <libobjc.A.dylib/FxRenderModelPrivateDelegate.h>

@interface OZFxPrincipalDelegate : NSObject <FxPlugPrincipalDelegate, FxRenderModelPrivateDelegate> {

	OZFxPlugSharedBase* _plugin;

}
-(id)initWithPlugin:(OZFxPlugSharedBase*)arg1 ;
-(id)fxServiceProxy;
-(const PCRenderModel*)renderModel;
@end

