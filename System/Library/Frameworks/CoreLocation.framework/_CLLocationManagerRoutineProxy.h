/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerRoutineClientInterface.h>

@protocol OS_dispatch_queue, CLLocationManagerRoutineDelegate;
@class NSObject, NSXPCConnection, CLLocationManagerRoutine, NSString;

@interface _CLLocationManagerRoutineProxy : NSObject <CLLocationManagerRoutineClientInterface> {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _updating;
	BOOL _updatingPredictedApplications;
	NSXPCConnection* _connection;
	id<CLLocationManagerRoutineDelegate> _delegate;
	CLLocationManagerRoutine* _locationManagerRoutine;

}

@property (nonatomic,retain) NSXPCConnection * connection;                                   //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) id<CLLocationManagerRoutineDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CLLocationManagerRoutine * locationManagerRoutine;              //@synthesize locationManagerRoutine=_locationManagerRoutine - In the implementation block
@property (assign,nonatomic) BOOL updating;                                                  //@synthesize updating=_updating - In the implementation block
@property (assign,nonatomic) BOOL updatingPredictedApplications;                             //@synthesize updatingPredictedApplications=_updatingPredictedApplications - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<CLLocationManagerRoutineDelegate>)arg1 ;
-(void)dealloc;
-(id<CLLocationManagerRoutineDelegate>)delegate;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)createConnection;
-(void)didUpdateLocations:(id)arg1 ;
-(void)didUpdatePredictedApplications:(id)arg1 ;
-(BOOL)updatingPredictedApplications;
-(id)initWithCLLocationManagerRoutine:(id)arg1 ;
-(void)setUpdatingPredictedApplications:(BOOL)arg1 ;
-(void)setUpdating:(BOOL)arg1 ;
-(BOOL)updating;
-(CLLocationManagerRoutine *)locationManagerRoutine;
-(void)setLocationManagerRoutine:(CLLocationManagerRoutine *)arg1 ;
@end

