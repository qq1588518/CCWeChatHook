//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QBBeaconAnalyticsModule.h"

@class QBBeaconModuleStrategy;

@interface QBBeaconEventModule : NSObject <QBBeaconAnalyticsModule>
{
    _Bool userEnabled;
    _Bool beaconStatisReportEnabled;
    QBBeaconModuleStrategy *moduleStrategy;
}

+ (id)sharedInstance;
@property(retain) QBBeaconModuleStrategy *moduleStrategy; // @synthesize moduleStrategy;
@property(nonatomic) _Bool beaconStatisReportEnabled; // @synthesize beaconStatisReportEnabled;
@property(nonatomic) _Bool userEnabled; // @synthesize userEnabled;
- (void).cxx_destruct;
- (void)refreshNetInfo;
- (void)initBeaconProperties;
- (void)appEnterBack;
- (void)recordAppLaunchEvent:(_Bool)arg1;
- (void)appResumed;
- (void)appStarted;
- (_Bool)uploadModuleHistoryData;
- (_Bool)isEnabled;
- (void)enableModule;
- (void)disableModule;
- (_Bool)checkAndEnable;
- (int)moduleKey;
- (id)init;

@end

