/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccessExpress/DAOofParams.h>

@protocol DAOofResponseDelegate;
@class NSString;

@interface DAOofSettingsInfo : DAOofParams {

	NSString* _requestID;
	id<DAOofResponseDelegate> _consumer;

}

@property (nonatomic,retain) NSString * requestID;                                   //@synthesize requestID=_requestID - In the implementation block
@property (assign,nonatomic,__weak) id<DAOofResponseDelegate> consumer;              //@synthesize consumer=_consumer - In the implementation block
-(void)setConsumer:(id<DAOofResponseDelegate>)arg1 ;
-(id<DAOofResponseDelegate>)consumer;
-(NSString *)requestID;
-(void)setRequestID:(NSString *)arg1 ;
@end

