/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotifier.h>

@class RTPredictionControllerRoomAssist;

@interface RTPredictedRoomManager : RTNotifier {

	RTPredictionControllerRoomAssist* _roomAssistPredictionController;

}

@property (nonatomic,retain) RTPredictionControllerRoomAssist * roomAssistPredictionController;              //@synthesize roomAssistPredictionController=_roomAssistPredictionController - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)initWithName:(id)arg1 ;
-(void)shutdown;
-(void)processDataForPredictionModelWithHandler:(/*^block*/id)arg1 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)_startMonitoringForPredictedRooms;
-(void)fetchPredictedRoomsAtCurrentLocationWithHandler:(/*^block*/id)arg1 ;
-(void)printRoomAssistModel:(/*^block*/id)arg1 ;
-(void)processDataForRoomAssistModelWithHandler:(/*^block*/id)arg1 ;
-(void)_stopMonitoringForPredictedRooms;
-(RTPredictionControllerRoomAssist *)roomAssistPredictionController;
-(void)setRoomAssistPredictionController:(RTPredictionControllerRoomAssist *)arg1 ;
@end

