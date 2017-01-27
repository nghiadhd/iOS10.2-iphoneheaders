/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <libobjc.A.dylib/CoreDAVTaskDelegate.h>
#import <libobjc.A.dylib/CoreDAVTaskGroupDelegate.h>

@class CalDAVGetPrincipalEmailDetailsTaskGroup, NSURL, NSMutableArray, NSMutableSet, NSSet, NSString;

@interface CalDAVGetDelegatesBaseTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate, CoreDAVTaskGroupDelegate> {

	BOOL _serverSupportsExpandPropertyReport;
	CalDAVGetPrincipalEmailDetailsTaskGroup* _getPrincipalEmailDetailsTaskGroup;
	NSURL* _principalURL;
	NSMutableArray* _readPrincipalURLs;
	NSMutableArray* _writePrincipalURLs;
	NSMutableSet* _writeDetails;
	NSMutableSet* _readDetails;

}

@property (nonatomic,retain) CalDAVGetPrincipalEmailDetailsTaskGroup * getPrincipalEmailDetailsTaskGroup;              //@synthesize getPrincipalEmailDetailsTaskGroup=_getPrincipalEmailDetailsTaskGroup - In the implementation block
@property (nonatomic,retain) NSURL * principalURL;                                                                     //@synthesize principalURL=_principalURL - In the implementation block
@property (nonatomic,retain) NSMutableArray * readPrincipalURLs;                                                       //@synthesize readPrincipalURLs=_readPrincipalURLs - In the implementation block
@property (nonatomic,retain) NSMutableArray * writePrincipalURLs;                                                      //@synthesize writePrincipalURLs=_writePrincipalURLs - In the implementation block
@property (nonatomic,retain) NSMutableSet * writeDetails;                                                              //@synthesize writeDetails=_writeDetails - In the implementation block
@property (nonatomic,retain) NSMutableSet * readDetails;                                                               //@synthesize readDetails=_readDetails - In the implementation block
@property (assign,nonatomic) BOOL serverSupportsExpandPropertyReport;                                                  //@synthesize serverSupportsExpandPropertyReport=_serverSupportsExpandPropertyReport - In the implementation block
@property (nonatomic,retain,readonly) NSSet * readOnlyPrincipalDetails; 
@property (nonatomic,retain,readonly) NSSet * readWritePrincipalDetails; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)principalURL;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)setPrincipalURL:(NSURL *)arg1 ;
-(void)taskGroup:(id)arg1 didFinishWithError:(id)arg2 ;
-(id)initWithAccountInfoProvider:(id)arg1 principalURL:(id)arg2 taskManager:(id)arg3 ;
-(id)_mappingsForPrincipalDetails;
-(id)_popFromArray:(id)arg1 ;
-(NSMutableArray *)readPrincipalURLs;
-(void)_getPrincipalDetailsForURL:(id)arg1 ;
-(NSMutableArray *)writePrincipalURLs;
-(BOOL)serverSupportsExpandPropertyReport;
-(void)_processDetailsFromMultiStatus:(id)arg1 allowWrite:(BOOL)arg2 ;
-(NSMutableSet *)writeDetails;
-(NSMutableSet *)readDetails;
-(void)setReadDetails:(NSMutableSet *)arg1 ;
-(void)setWriteDetails:(NSMutableSet *)arg1 ;
-(void)setReadPrincipalURLs:(NSMutableArray *)arg1 ;
-(void)setWritePrincipalURLs:(NSMutableArray *)arg1 ;
-(void)setGetPrincipalEmailDetailsTaskGroup:(CalDAVGetPrincipalEmailDetailsTaskGroup *)arg1 ;
-(CalDAVGetPrincipalEmailDetailsTaskGroup *)getPrincipalEmailDetailsTaskGroup;
-(NSSet *)readOnlyPrincipalDetails;
-(NSSet *)readWritePrincipalDetails;
-(void)setServerSupportsExpandPropertyReport:(BOOL)arg1 ;
@end

