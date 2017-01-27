/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:17 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@class FCCloudContext, NSDate, NSError, NSArray;

@interface FCEditorialCatchUpOperation : FCOperation {

	FCCloudContext* _context;
	NSDate* _date;
	NSError* _error;
	/*^block*/id _catchUpCompletionHandler;
	NSArray* _sectionGroups;

}

@property (copy) NSArray * sectionGroups;                           //@synthesize sectionGroups=_sectionGroups - In the implementation block
@property (retain) NSError * error;                                 //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) FCCloudContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSDate * date;                         //@synthesize date=_date - In the implementation block
@property (copy) id catchUpCompletionHandler;                       //@synthesize catchUpCompletionHandler=_catchUpCompletionHandler - In the implementation block
-(NSDate *)date;
-(FCCloudContext *)context;
-(void)setDate:(NSDate *)arg1 ;
-(void)setContext:(FCCloudContext *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(BOOL)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(id)catchUpCompletionHandler;
-(void)setCatchUpCompletionHandler:(id)arg1 ;
-(void)enumerateEditorialSectionsByRecencyWithBlock:(/*^block*/id)arg1 ;
-(NSArray *)sectionGroups;
-(void)setSectionGroups:(NSArray *)arg1 ;
-(void)_checkShouldShowEditorialWithCompletionHandler:(/*^block*/id)arg1 ;
@end

