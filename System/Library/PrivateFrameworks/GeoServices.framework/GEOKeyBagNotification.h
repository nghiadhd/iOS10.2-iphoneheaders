/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GEOKeyBagNotification : NSObject {

	int _currentState;
	int _notifyToken;

}
+(id)sharedObject;
-(id)init;
-(void)dealloc;
-(int)state;
-(void)_statusChanged;
-(void)updateState;
@end
