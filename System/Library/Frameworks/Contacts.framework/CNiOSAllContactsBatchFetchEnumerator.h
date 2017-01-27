/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNBatchFetchEnumerator.h>

@protocol CNDataMapper;
@class CNContactFetchRequest, NSError, NSString;

@interface CNiOSAllContactsBatchFetchEnumerator : NSObject <CNBatchFetchEnumerator> {

	id<CNDataMapper> _dataMapper;
	CNContactFetchRequest* _fetchRequest;
	long long _batchSize;
	long long _totalContactsCount;
	unsigned long long _nextStartIndex;
	NSError* _error;

}

@property (assign,nonatomic,__weak) id<CNDataMapper> dataMapper;                //@synthesize dataMapper=_dataMapper - In the implementation block
@property (nonatomic,retain) CNContactFetchRequest * fetchRequest;              //@synthesize fetchRequest=_fetchRequest - In the implementation block
@property (assign,nonatomic) long long batchSize;                               //@synthesize batchSize=_batchSize - In the implementation block
@property (assign,nonatomic) long long totalContactsCount;                      //@synthesize totalContactsCount=_totalContactsCount - In the implementation block
@property (assign,nonatomic) unsigned long long nextStartIndex;                 //@synthesize nextStartIndex=_nextStartIndex - In the implementation block
@property (nonatomic,retain) NSError * error;                                   //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMapper:(id)arg1 fetchRequest:(id)arg2 batchSize:(long long)arg3 ;
-(id)nextContactsAndMatchInfos:(id*)arg1 error:(id*)arg2 ;
-(id<CNDataMapper>)dataMapper;
-(unsigned long long)nextStartIndex;
-(long long)totalContactsCount;
-(void)setNextStartIndex:(unsigned long long)arg1 ;
-(void)setDataMapper:(id<CNDataMapper>)arg1 ;
-(void)setTotalContactsCount:(long long)arg1 ;
-(CNContactFetchRequest *)fetchRequest;
-(void)setFetchRequest:(CNContactFetchRequest *)arg1 ;
-(NSError *)error;
-(long long)batchSize;
-(void)setBatchSize:(long long)arg1 ;
-(void)setError:(NSError *)arg1 ;
@end
