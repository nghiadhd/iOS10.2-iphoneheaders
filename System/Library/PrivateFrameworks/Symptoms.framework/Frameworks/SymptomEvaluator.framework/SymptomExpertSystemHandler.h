/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/ExpertSystemHandlerCore.h>
#import <libobjc.A.dylib/ProbeManagerDelegate.h>
#import <libobjc.A.dylib/CLIPSShimDelegate.h>

@class SymptomExpertSystemState, NSArray, SystemSettingsRelay, PowerStateRelay, NetworkAnalyticsStateRelay, CellFallbackHandler, SystemProperties, NSSet, NSMutableDictionary, CLIPSShim, NSMutableArray, NSString, NSDate, NSDataDetector;

@interface SymptomExpertSystemHandler : ExpertSystemHandlerCore <ProbeManagerDelegate, CLIPSShimDelegate> {

	SymptomExpertSystemState* currentState;
	NSArray* states;
	id relayReadyObserver;
	SystemSettingsRelay* settingsRelay;
	PowerStateRelay* powerRelay;
	NetworkAnalyticsStateRelay* cellRelay;
	NetworkAnalyticsStateRelay* wifiRelay;
	CellFallbackHandler* rnfRelay;
	SystemProperties* systemPropsRelay;
	unsigned administrativeState;
	unsigned relayObservingState;
	NSSet* relayObservingKeys;
	NSSet* relayObservingKeysScaled;
	NSMutableDictionary* relayToFacts;
	NSSet* awdDirectSymptoms;
	NSMutableDictionary* awdDirectHistory;
	CLIPSShim* ruleEngine;
	unsigned long long _stepper;
	NSMutableArray* _incomingSymptoms;
	NSMutableArray* _processedSymptoms;
	NSString* _diagnosticSessionIdentifier;
	NSMutableArray* _caseSignatures;
	NSMutableDictionary* _diagnosticSessionOutput;
	NSDate* _lastSymptomRun;
	NSMutableDictionary* _endpointObfuscations;
	NSDataDetector* _urlDetector;
	NSDate* _diagSessionExpectedEnd;

}

@property (assign) unsigned long long stepper;                                           //@synthesize stepper=_stepper - In the implementation block
@property (nonatomic,retain) NSMutableArray * incomingSymptoms;                          //@synthesize incomingSymptoms=_incomingSymptoms - In the implementation block
@property (nonatomic,retain) NSMutableArray * processedSymptoms;                         //@synthesize processedSymptoms=_processedSymptoms - In the implementation block
@property (nonatomic,retain) NSString * diagnosticSessionIdentifier;                     //@synthesize diagnosticSessionIdentifier=_diagnosticSessionIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * caseSignatures;                            //@synthesize caseSignatures=_caseSignatures - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * diagnosticSessionOutput;              //@synthesize diagnosticSessionOutput=_diagnosticSessionOutput - In the implementation block
@property (nonatomic,retain) NSDate * lastSymptomRun;                                    //@synthesize lastSymptomRun=_lastSymptomRun - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * endpointObfuscations;                 //@synthesize endpointObfuscations=_endpointObfuscations - In the implementation block
@property (nonatomic,retain) NSDataDetector * urlDetector;                               //@synthesize urlDetector=_urlDetector - In the implementation block
@property (nonatomic,retain) NSDate * diagSessionExpectedEnd;                            //@synthesize diagSessionExpectedEnd=_diagSessionExpectedEnd - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)configureClass:(id)arg1 ;
+(BOOL)noteSymptom:(id)arg1 ;
+(id)libtraceInfo:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_dumpState;
-(BOOL)noteSymptom:(id)arg1 ;
-(void)setCaseSignatures:(NSMutableArray *)arg1 ;
-(void)setIncomingSymptoms:(NSMutableArray *)arg1 ;
-(void)setProcessedSymptoms:(NSMutableArray *)arg1 ;
-(void)setDiagnosticSessionOutput:(NSMutableDictionary *)arg1 ;
-(void)setEndpointObfuscations:(NSMutableDictionary *)arg1 ;
-(void)_cleanupAwdDirectHistory;
-(void)_completeInitialization;
-(void)_removeRelayObservers;
-(void)setUrlDetector:(NSDataDetector *)arg1 ;
-(void)setDiagSessionExpectedEnd:(NSDate *)arg1 ;
-(void)setLastSymptomRun:(NSDate *)arg1 ;
-(void)registerAllCLIPSCallbacks;
-(BOOL)loadDefaultRulesForEngine:(id)arg1 ;
-(void)_administrativeDisable;
-(void)loadDefaultFactsForEngine:(id)arg1 ;
-(void)_addRelayObservers;
-(NSDate *)lastSymptomRun;
-(BOOL)hasActiveDiagnosis;
-(NSDate *)diagSessionExpectedEnd;
-(void)cancelDiagnosticSession:(id)arg1 ;
-(void)_bringStateToIdle;
-(void)retractFact:(void*)arg1 moduleName:(id)arg2 engine:(id)arg3 run:(BOOL)arg4 ;
-(void*)assertFactString:(id)arg1 moduleName:(id)arg2 engine:(id)arg3 run:(BOOL)arg4 ;
-(NSString *)diagnosticSessionIdentifier;
-(BOOL)_bringStateToActive;
-(void)processRelayStateChange:(id)arg1 key:(id)arg2 relay:(id)arg3 ;
-(void)_administrativeEnable;
-(id)symptomDictionaryForSymptom:(id)arg1 domain:(id)arg2 type:(id)arg3 ;
-(void)_processLibnetcoreSymptom:(id)arg1 symptomName:(id)arg2 ;
-(BOOL)urlIsAppleDomain:(id)arg1 ;
-(BOOL)_propertiesFromLibnetcoreSymptom:(id*)arg1 effectivePID:(int*)arg2 interfaceIndex:(int*)arg3 fromSymptom:(id)arg4 ;
-(void)_processSymptomsdEnergyBackgroundRRCExcDuration:(id)arg1 symptomName:(id)arg2 ;
-(void)_processSymptomsdFlowCountExceededThreshold:(id)arg1 symptomName:(id)arg2 ;
-(void)_processSymptomsdMbufPeak:(id)arg1 symptomName:(id)arg2 ;
-(void)_processSymptomsdNoDefaultRoute:(id)arg1 symptomName:(id)arg2 ;
-(void)_processSymptomsdRnfSymptom:(id)arg1 symptomName:(id)arg2 categoryType:(id)arg3 ;
-(void)_processSymptomsdWiFiShimSymptom:(id)arg1 symptomName:(id)arg2 ;
-(id)arbitratorDictionaryForSymptom:(id)arg1 procName:(id)arg2 interfaceType:(id)arg3 eventCount:(id)arg4 duration:(id)arg5 ;
-(void)_libnetcoreSymptom:(id)arg1 ;
-(void)_configdSymptom:(id)arg1 ;
-(void)_symptomsdSymptom:(id)arg1 ;
-(void)_libtraceOSLog:(id)arg1 ;
-(void)setStepper:(unsigned long long)arg1 ;
-(void)_prepareToCreateAndPostAwdDirectMetricForSymptom:(id)arg1 ;
-(void)startDiagnosticSessionWithDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 processID:(id)arg4 processName:(id)arg5 bundleID:(id)arg6 threshold:(id)arg7 sessionDuration:(id)arg8 ;
-(void)addDiagnosticSession:(id)arg1 symptomIndex:(id)arg2 hasDictionary:(id)arg3 endSession:(id)arg4 ;
-(void)endDiagnosticSession:(id)arg1 ;
-(void)logSessionEventProbe:(id)arg1 endpoint:(id)arg2 interface:(id)arg3 status:(id)arg4 ;
-(void)logSessionEventSymptom:(id)arg1 process:(id)arg2 endpoint:(id)arg3 interface:(id)arg4 ;
-(void)logSessionEventMessage:(id)arg1 ;
-(void)expertSystemToIdle;
-(NSMutableDictionary *)diagnosticSessionOutput;
-(id)signatureWithDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 detectedProcess:(id)arg4 triggerThresholdValues:(id)arg5 ;
-(void)setDiagnosticSessionIdentifier:(NSString *)arg1 ;
-(NSMutableArray *)caseSignatures;
-(void)sendCaseSignaturesToDiagnosticReporter;
-(BOOL)checkForAndObfuscateEndpoint:(id)arg1 obfuscatedEndpoint:(id*)arg2 ;
-(id)obfuscatedEndpoint:(id)arg1 ;
-(NSDataDetector *)urlDetector;
-(BOOL)_getAwdDirectDampeningStatus:(int*)arg1 posted:(int*)arg2 forProcess:(id)arg3 withTimeStamp:(double)arg4 ;
-(void)probeStatusUpdate:(id)arg1 ;
-(void)probeOutputFilePaths:(id)arg1 forDiagSessionUUID:(id)arg2 testWasCancelled:(BOOL)arg3 ;
-(void)clipsConsoleOutput:(id)arg1 consoleChannel:(const char*)arg2 forEngine:(id)arg3 ;
-(void*)assertFactString:(id)arg1 moduleName:(id)arg2 engine:(id)arg3 ;
-(void)diagnosticProbeOutputFiles:(/*^block*/id)arg1 ;
-(NSMutableArray *)incomingSymptoms;
-(NSMutableArray *)processedSymptoms;
-(NSMutableDictionary *)endpointObfuscations;
-(unsigned long long)stepper;
@end

