/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotifier.h>

@class GEONavigationListener, GEONavigationRouteSummary;

@interface RTNavigationManager : RTNotifier {

	BOOL _monitorRouteSummary;
	GEONavigationListener* _navigationListener;
	GEONavigationRouteSummary* _routeSummary;

}

@property (nonatomic,retain) GEONavigationListener * navigationListener;              //@synthesize navigationListener=_navigationListener - In the implementation block
@property (assign,nonatomic) BOOL monitorRouteSummary;                                //@synthesize monitorRouteSummary=_monitorRouteSummary - In the implementation block
@property (nonatomic,retain) GEONavigationRouteSummary * routeSummary;                //@synthesize routeSummary=_routeSummary - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(GEONavigationRouteSummary *)routeSummary;
-(void)setup;
-(void)onAuthorizationNotification:(id)arg1 ;
-(GEONavigationListener *)navigationListener;
-(void)setRouteSummary:(GEONavigationRouteSummary *)arg1 ;
-(void)setMonitorRouteSummary:(BOOL)arg1 ;
-(void)setNavigationListener:(GEONavigationListener *)arg1 ;
-(BOOL)monitorRouteSummary;
@end

