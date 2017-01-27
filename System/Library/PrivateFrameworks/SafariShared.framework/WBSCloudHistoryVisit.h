/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WBSCloudHistoryVisitIdentifier, NSString, NSDictionary;

@interface WBSCloudHistoryVisit : NSObject {

	BOOL _loadSuccessful;
	BOOL _httpNonGet;
	WBSCloudHistoryVisitIdentifier* _visitIdentifier;
	NSString* _title;
	WBSCloudHistoryVisitIdentifier* _redirectSourceVisitIdentifier;
	WBSCloudHistoryVisit* _redirectSourceVisit;
	WBSCloudHistoryVisitIdentifier* _redirectDestinationVisitIdentifier;
	WBSCloudHistoryVisit* _redirectDestinationVisit;

}

@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,copy) WBSCloudHistoryVisitIdentifier * visitIdentifier;                                 //@synthesize visitIdentifier=_visitIdentifier - In the implementation block
@property (nonatomic,copy) NSString * title;                                                                 //@synthesize title=_title - In the implementation block
@property (assign,getter=loadWasSuccessful,nonatomic) BOOL loadSuccessful;                                   //@synthesize loadSuccessful=_loadSuccessful - In the implementation block
@property (assign,getter=wasHTTPNonGet,nonatomic) BOOL httpNonGet;                                           //@synthesize httpNonGet=_httpNonGet - In the implementation block
@property (nonatomic,copy) WBSCloudHistoryVisitIdentifier * redirectSourceVisitIdentifier;                   //@synthesize redirectSourceVisitIdentifier=_redirectSourceVisitIdentifier - In the implementation block
@property (assign,nonatomic,__weak) WBSCloudHistoryVisit * redirectSourceVisit;                              //@synthesize redirectSourceVisit=_redirectSourceVisit - In the implementation block
@property (nonatomic,copy) WBSCloudHistoryVisitIdentifier * redirectDestinationVisitIdentifier;              //@synthesize redirectDestinationVisitIdentifier=_redirectDestinationVisitIdentifier - In the implementation block
@property (assign,nonatomic,__weak) WBSCloudHistoryVisit * redirectDestinationVisit;                         //@synthesize redirectDestinationVisit=_redirectDestinationVisit - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithHistoryVisit:(id)arg1 ;
-(WBSCloudHistoryVisitIdentifier *)visitIdentifier;
-(WBSCloudHistoryVisitIdentifier *)redirectSourceVisitIdentifier;
-(void)setRedirectSourceVisit:(WBSCloudHistoryVisit *)arg1 ;
-(void)setRedirectDestinationVisit:(WBSCloudHistoryVisit *)arg1 ;
-(WBSCloudHistoryVisit *)redirectSourceVisit;
-(WBSCloudHistoryVisit *)redirectDestinationVisit;
-(BOOL)wasHTTPNonGet;
-(BOOL)loadWasSuccessful;
-(void)setVisitIdentifier:(WBSCloudHistoryVisitIdentifier *)arg1 ;
-(void)setLoadSuccessful:(BOOL)arg1 ;
-(void)setHttpNonGet:(BOOL)arg1 ;
-(void)setRedirectSourceVisitIdentifier:(WBSCloudHistoryVisitIdentifier *)arg1 ;
-(WBSCloudHistoryVisitIdentifier *)redirectDestinationVisitIdentifier;
-(void)setRedirectDestinationVisitIdentifier:(WBSCloudHistoryVisitIdentifier *)arg1 ;
@end

