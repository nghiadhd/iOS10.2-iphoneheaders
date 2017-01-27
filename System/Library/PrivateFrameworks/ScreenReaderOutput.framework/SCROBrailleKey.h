/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableArray, NSString;

@interface SCROBrailleKey : NSObject <NSCoding> {

	NSMutableArray* _maskArray;
	NSString* _identifier;
	long long _routerIndex;
	long long _routerToken;
	long long _routerLocation;
	BOOL _hasRouterInfo;
	id _appToken;
	int _displayToken;
	int _displayMode;

}
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)identifier;
-(int)displayMode;
-(void)setDisplayMode:(int)arg1 ;
-(id)keyMasks;
-(BOOL)getRouterIndex:(long long*)arg1 token:(long long*)arg2 location:(long long*)arg3 appToken:(id*)arg4 ;
-(void)setDisplayToken:(int)arg1 ;
-(void)addKeyMask:(unsigned)arg1 ;
-(void)setRouterIndex:(long long)arg1 token:(long long)arg2 location:(long long)arg3 appToken:(id)arg4 ;
-(int)displayToken;
@end

