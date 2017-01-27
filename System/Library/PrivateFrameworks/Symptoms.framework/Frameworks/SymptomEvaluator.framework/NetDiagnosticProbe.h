/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/TestProbe.h>
#import <libobjc.A.dylib/NetDiagnosticsShimDelegate.h>

@class NetDiagnosticsShim, NSString, NSMutableDictionary;

@interface NetDiagnosticProbe : TestProbe <NetDiagnosticsShimDelegate> {

	NetDiagnosticsShim* _netDiags;
	NSString* _taskName;
	NSString* _ndFilePath;
	NSMutableDictionary* _netDiagsTaskDict;

}

@property (nonatomic,retain) NetDiagnosticsShim * netDiags;                       //@synthesize netDiags=_netDiags - In the implementation block
@property (nonatomic,retain) NSString * taskName;                                 //@synthesize taskName=_taskName - In the implementation block
@property (nonatomic,retain) NSString * ndFilePath;                               //@synthesize ndFilePath=_ndFilePath - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * netDiagsTaskDict;              //@synthesize netDiagsTaskDict=_netDiagsTaskDict - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setTaskName:(NSString *)arg1 ;
-(NSString *)taskName;
-(void)setNetDiagsTaskDict:(NSMutableDictionary *)arg1 ;
-(BOOL)startNetDiagnosticsTask:(/*^block*/id)arg1 ;
-(NSString *)ndFilePath;
-(void)setNetDiags:(NetDiagnosticsShim *)arg1 ;
-(NetDiagnosticsShim *)netDiags;
-(void)cancelTest:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)netDiagsTaskDict;
-(void)setNdFilePath:(NSString *)arg1 ;
-(void)disconnectFromNetDiagnostics;
-(BOOL)stopNetDiagnosticsTask:(/*^block*/id)arg1 ;
-(BOOL)netDiagnosticsTaskInProgress:(/*^block*/id)arg1 ;
@end

