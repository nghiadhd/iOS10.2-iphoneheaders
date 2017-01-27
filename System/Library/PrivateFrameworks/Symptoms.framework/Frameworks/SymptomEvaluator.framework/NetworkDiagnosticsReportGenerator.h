/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/DiagnosticReportGenerator.h>
#import <libobjc.A.dylib/NetDiagnosticsShimDelegate.h>

@class NetDiagnosticsShim, NSMutableDictionary, NSDictionary, NSDate, NSString;

@interface NetworkDiagnosticsReportGenerator : DiagnosticReportGenerator <NetDiagnosticsShimDelegate> {

	NetDiagnosticsShim* _netDiags;
	NSMutableDictionary* _options;
	NSDictionary* _netDiagsResults;
	NSDate* _reportStart;

}

@property (nonatomic,retain) NetDiagnosticsShim * netDiags;               //@synthesize netDiags=_netDiags - In the implementation block
@property (nonatomic,retain) NSDictionary * netDiagsResults;              //@synthesize netDiagsResults=_netDiagsResults - In the implementation block
@property (nonatomic,retain) NSDate * reportStart;                        //@synthesize reportStart=_reportStart - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * options;               //@synthesize options=_options - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithQueue:(id)arg1 ;
-(NSMutableDictionary *)options;
-(void)setOptions:(NSMutableDictionary *)arg1 ;
-(BOOL)startReportGeneration;
-(void)setNetDiags:(NetDiagnosticsShim *)arg1 ;
-(NetDiagnosticsShim *)netDiags;
-(void)setNetDiagsResults:(NSDictionary *)arg1 ;
-(BOOL)startNetDiagnosticsTaskWithReply:(/*^block*/id)arg1 ;
-(NSDictionary *)netDiagsResults;
-(void)netDiagnosticTaskStatusChangedFor:(id)arg1 toStatus:(int)arg2 ;
-(id)createDefaultTaskDictionaryWithTaskName:(const char*)arg1 filePath:(id)arg2 ;
-(NSDate *)reportStart;
-(void)setReportStart:(NSDate *)arg1 ;
@end

