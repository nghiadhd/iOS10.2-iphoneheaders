/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libMobileGestaltExtensions.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MobileGestaltHelper;
@class NSXPCConnection;

@interface MobileGestaltHelperProxy : NSObject {

	int _error;
	id<MobileGestaltHelper> _helper;
	NSXPCConnection* _connection;

}

@property (readonly) id<MobileGestaltHelper> helper;              //@synthesize helper=_helper - In the implementation block
@property (readonly) NSXPCConnection * connection;                //@synthesize connection=_connection - In the implementation block
@property (assign) int error;                                     //@synthesize error=_error - In the implementation block
+(id)proxy;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(NSXPCConnection *)connection;
-(id<MobileGestaltHelper>)helper;
-(int)error;
-(void)setError:(int)arg1 ;
@end

