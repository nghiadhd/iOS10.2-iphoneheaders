/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CommCenter/CommCenter-Structs.h>
@class NWPathEvaluator, NSString;

@interface DataConnectionAgentInterfaceObserver : NSObject {

	NWPathEvaluator* fPathEvaluator;
	NWPathEvaluator* fAgentEvaluator;
	DataConnectionAgentInterfaceAvailabilityObserver* fAvailabilityObserver;
	NSString* fDomain;
	NSString* fAgentType;
	Class fAgentClass;
	BOOL fPathAvailable;
	BOOL fAgentAvailable;
	const char* fLogName;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > fUuid;
	queue* fQueue;
	shared_ptr<std::__1::basic_string<char> >* fAnchor;

}
-(void)doUpdateInterface:(id)arg1 ;
-(id)initWithAvailabilityObserver:(DataConnectionAgentInterfaceAvailabilityObserver*)arg1 domain:(id)arg2 agentType:(id)arg3 agentClass:(Class)arg4 logName:(const char*)arg5 uuid:(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)arg6 queue:(const queue*)arg7 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(const char*)getName;
@end

