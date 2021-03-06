/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:35:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PETScalarEventTracker;

@interface _TIStatisticsProactiveTracker : NSObject {

	PETScalarEventTracker* _triggeredEventTracker;
	PETScalarEventTracker* _triggeredCategoryEventTracker;
	PETScalarEventTracker* _suggestedEventTracker;
	PETScalarEventTracker* _suggestedCategoryEventTracker;
	PETScalarEventTracker* _failureEventTracker;
	PETScalarEventTracker* _failureCategoryEventTracker;
	PETScalarEventTracker* _selectedEventTracker;
	PETScalarEventTracker* _selectedCategoryEventTracker;

}

@property (nonatomic,retain) PETScalarEventTracker * triggeredEventTracker;                      //@synthesize triggeredEventTracker=_triggeredEventTracker - In the implementation block
@property (nonatomic,retain) PETScalarEventTracker * triggeredCategoryEventTracker;              //@synthesize triggeredCategoryEventTracker=_triggeredCategoryEventTracker - In the implementation block
@property (nonatomic,retain) PETScalarEventTracker * suggestedEventTracker;                      //@synthesize suggestedEventTracker=_suggestedEventTracker - In the implementation block
@property (nonatomic,retain) PETScalarEventTracker * suggestedCategoryEventTracker;              //@synthesize suggestedCategoryEventTracker=_suggestedCategoryEventTracker - In the implementation block
@property (nonatomic,retain) PETScalarEventTracker * failureEventTracker;                        //@synthesize failureEventTracker=_failureEventTracker - In the implementation block
@property (nonatomic,retain) PETScalarEventTracker * failureCategoryEventTracker;                //@synthesize failureCategoryEventTracker=_failureCategoryEventTracker - In the implementation block
@property (nonatomic,retain) PETScalarEventTracker * selectedEventTracker;                       //@synthesize selectedEventTracker=_selectedEventTracker - In the implementation block
@property (nonatomic,retain) PETScalarEventTracker * selectedCategoryEventTracker;               //@synthesize selectedCategoryEventTracker=_selectedCategoryEventTracker - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)trackTriggeredWithSource:(unsigned char)arg1 categories:(id)arg2 locale:(id)arg3 ;
-(void)trackSuggestedWithSource:(unsigned char)arg1 count:(unsigned long long)arg2 categories:(id)arg3 locale:(id)arg4 ;
-(void)trackFailureWithSource:(unsigned char)arg1 reason:(unsigned char)arg2 categories:(id)arg3 locale:(id)arg4 ;
-(void)trackSelectedWithSource:(unsigned char)arg1 position:(unsigned long long)arg2 categories:(id)arg3 locale:(id)arg4 ;
-(PETScalarEventTracker *)triggeredEventTracker;
-(void)setTriggeredEventTracker:(PETScalarEventTracker *)arg1 ;
-(PETScalarEventTracker *)triggeredCategoryEventTracker;
-(void)setTriggeredCategoryEventTracker:(PETScalarEventTracker *)arg1 ;
-(PETScalarEventTracker *)suggestedEventTracker;
-(void)setSuggestedEventTracker:(PETScalarEventTracker *)arg1 ;
-(PETScalarEventTracker *)suggestedCategoryEventTracker;
-(void)setSuggestedCategoryEventTracker:(PETScalarEventTracker *)arg1 ;
-(PETScalarEventTracker *)failureEventTracker;
-(void)setFailureEventTracker:(PETScalarEventTracker *)arg1 ;
-(PETScalarEventTracker *)failureCategoryEventTracker;
-(void)setFailureCategoryEventTracker:(PETScalarEventTracker *)arg1 ;
-(PETScalarEventTracker *)selectedEventTracker;
-(void)setSelectedEventTracker:(PETScalarEventTracker *)arg1 ;
-(PETScalarEventTracker *)selectedCategoryEventTracker;
-(void)setSelectedCategoryEventTracker:(PETScalarEventTracker *)arg1 ;
@end

