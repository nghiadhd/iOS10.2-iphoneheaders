/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/UIPlugins/FMF.siriUIBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMF/FMFBaseCmd.h>

@class CLLocation;

@interface ShowHideLocationCmd : FMFBaseCmd {

	BOOL hideLocation;
	CLLocation* currentLocation;

}

@property (assign,nonatomic) BOOL hideLocation; 
@property (nonatomic,copy) CLLocation * currentLocation; 
-(void)setHideLocation:(BOOL)arg1 ;
-(id)currentLocationDictionary;
-(BOOL)hideLocation;
-(id)path;
-(id)result;
-(CLLocation *)currentLocation;
-(void)setCurrentLocation:(CLLocation *)arg1 ;
-(id)jsonBodyDictionary;
@end

