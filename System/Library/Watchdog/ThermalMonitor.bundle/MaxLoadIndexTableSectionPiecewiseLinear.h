/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ThermalMonitor/MaxLoadIndexTableSection.h>

@interface MaxLoadIndexTableSectionPiecewiseLinear : MaxLoadIndexTableSection {

	unsigned long long _controlEfforts[8];
	unsigned long long _maxLIs[8];
	unsigned long long _unconstrainedMaxLI;
	unsigned long long _pointCount;

}
-(unsigned long long)maxLI:(unsigned long long)arg1 ;
-(id)initWithDecisionTreeSectionControlEfforts:(id)arg1 maxLIs:(id)arg2 unconstrainedMaxLI:(unsigned long long)arg3 ;
@end

