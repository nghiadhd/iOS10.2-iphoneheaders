/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class NSArray;

@interface CAWindowServer : NSObject {

	CAWindowServerImpl* _impl;
	BOOL _mirroringEnabled;

}

@property (readonly) NSArray * displays; 
@property (getter=isMirroringEnabled) BOOL mirroringEnabled;              //@synthesize mirroringEnabled=_mirroringEnabled - In the implementation block
@property (assign) unsigned rendererFlags; 
@property (getter=isSecure) BOOL secure; 
+(id)serverWithOptions:(id)arg1 ;
+(id)server;
+(id)contextWithOptions:(id)arg1 ;
+(id)context;
+(id)serverIfRunning;
-(void)addDisplay:(id)arg1 ;
-(void)removeDisplay:(id)arg1 ;
-(id)displayWithName:(id)arg1 ;
-(id)displayWithDisplayId:(unsigned)arg1 ;
-(id)displayWithUniqueId:(id)arg1 ;
-(void)_detectDisplays;
-(void)_initializeBrightnessNotifications;
-(unsigned)rendererFlags;
-(id)secureModeViolations;
-(id)insecureProcessIds;
-(unsigned)clientPortOfContextId:(unsigned)arg1 ;
-(unsigned)taskPortOfContextId:(unsigned)arg1 ;
-(BOOL)isMirroringEnabled;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)_init;
-(void)setRendererFlags:(unsigned)arg1 ;
-(NSArray *)displays;
-(void)setSecure:(BOOL)arg1 ;
-(BOOL)isSecure;
-(void)setMirroringEnabled:(BOOL)arg1 ;
-(unsigned)contextIdHostingContextId:(unsigned)arg1 ;
-(void)removeAllDisplays;
@end

