PK     ˋIFu�8��$  �$  	  main.xpdlUT -~�T-~�T-~�T<?xml version="1.0" encoding="UTF-8"?>
<Package Id="wfpkg60e9abc65n0oagaa" Name="设计过程2935" xmlns="http://www.wfmc.org/2002/XPDL1.0" xmlns:xpdl="http://www.wfmc.org/2002/XPDL1.0" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://www.wfmc.org/2002/XPDL1.0 http://wfmc.org/standards/docs/TC-1025_schema_10_xpdl.xsd">
<PackageHeader>
<XPDLVersion>1.0</XPDLVersion>
<Vendor>Together</Vendor>
<Created>2015-02-09 17:30:21</Created></PackageHeader>
<RedefinableHeader PublicationStatus="UNDER_TEST"/>
<ConformanceClass GraphConformance="NON_BLOCKED"/>
<WorkflowProcesses>
<WorkflowProcess AccessLevel="PUBLIC" Id="wfprcs60e9abc65n0oagaa" Name="设计过程2935">
<ProcessHeader DurationUnit="D">
<Author><![CDATA[Peraglobal,Inc.]]></Author>
<Created><![CDATA[2015-02-09 17:29:47]]></Created>
<Description><![CDATA[设计过程2935]]></Description>
<Version><![CDATA[1.0]]></Version>
</ProcessHeader>
<RedefinableHeader PublicationStatus="UNDER_TEST"/>
<DataFields>
</DataFields>
<Activities>
<Activity Id="Ff58exe" Name="并行">
<Implementation><SubFlow Execution="SYNCHR" Id="subprocessf58exe"/></Implementation>
<Performer>default_participant_id</Performer>
<Author><![CDATA[Peraglobal,Inc.]]></Author>
<Created><![CDATA[2015-02-09 17:29:51]]></Created>
<Description><![CDATA[并行]]></Description>
<Version><![CDATA[1.0]]></Version>
<StartMode><Automatic/></StartMode>
<FinishMode><Automatic/></FinishMode>
<ExtendedAttributes>
<ExtendedAttribute Name="nodeType" Value="ParallelNode"/>
<ExtendedAttribute Name="OrderNumber" Value="1"/>
<ExtendedAttribute Name="Author" Value="Peraglobal,Inc."/>
<ExtendedAttribute Name="Created" Value="2015-02-09 17:29:51"/>
<ExtendedAttribute Name="Version" Value="1.0"/>
</ExtendedAttributes>
</Activity>
</Activities>
<Transitions>
</Transitions>
<ExtendedAttributes>
<ExtendedAttribute Name="StartOfWorkflow" Value="Ff58exe"/>
<ExtendedAttribute Name="EndOfWorkflow" Value="Ff58exe"/>
<ExtendedAttribute Name="processType" Value="static"/>
<ExtendedAttribute Name="robotRunMode" Value="0"/>
<ExtendedAttribute Name="nodeType" Value="Root"/>
<ExtendedAttribute Name="BlackBox" Value="true"/>
<ExtendedAttribute Name="Author" Value="Peraglobal,Inc."/>
<ExtendedAttribute Name="Created" Value="2015-02-09 17:29:47"/>
<ExtendedAttribute Name="Version" Value="1.0"/>
</ExtendedAttributes>
</WorkflowProcess>

<WorkflowProcess AccessLevel="PUBLIC" Id="subprocessf58exe" Name="并行">
<ProcessHeader DurationUnit="D">
<Author><![CDATA[Peraglobal,Inc.]]></Author>
<Created><![CDATA[2015-02-09 17:29:51]]></Created>
<Description><![CDATA[并行]]></Description>
<Version><![CDATA[1.0]]></Version>
</ProcessHeader>
<RedefinableHeader PublicationStatus="UNDER_TEST"/>
<Activities>
<Activity Id="F5r33v9" Name="串行">
<Implementation><SubFlow Execution="SYNCHR" Id="subprocess5r33v9"/></Implementation>
<Performer>default_participant_id</Performer>
<Author><![CDATA[Peraglobal,Inc.]]></Author>
<Created><![CDATA[2015-02-09 17:30:01]]></Created>
<Description><![CDATA[串行]]></Description>
<Version><![CDATA[1.0]]></Version>
<StartMode><Automatic/></StartMode>
<FinishMode><Automatic/></FinishMode>
<ExtendedAttributes>
<ExtendedAttribute Name="nodeType" Value="SequenceNode"/>
<ExtendedAttribute Name="OrderNumber" Value="2"/>
<ExtendedAttribute Name="Author" Value="Peraglobal,Inc."/>
<ExtendedAttribute Name="Created" Value="2015-02-09 17:30:01"/>
<ExtendedAttribute Name="Version" Value="1.0"/>
</ExtendedAttributes>
</Activity>
<Activity Id="F305ol0" Name="Word组件">
<Implementation><No/></Implementation>
<Performer>default_participant_id</Performer>
<Author><![CDATA[Peraglobal,Inc.]]></Author>
<Created><![CDATA[2015-02-09 17:16:09]]></Created>
<Description><![CDATA[Word组件]]></Description>
<Version><![CDATA[1.0]]></Version>
<StartMode><Automatic/></StartMode>
<FinishMode><Automatic/></FinishMode>
<ExtendedAttributes>
<ExtendedAttribute Name="ComponentId" Value="a2cdcf9e-1027-4908-84a3-47f2e575cbc9"/>
<ExtendedAttribute Name="ComponentType" Value="Word组件"/>
<ExtendedAttribute Name="robotType" Value="WORD2B29-2FB6-4A5A-9EDD-8F42A1578EA2"/>
<ExtendedAttribute Name="ComponentFileNames" Value="Word组件.bot"/>
<ExtendedAttribute Name="ComponentFileStorePaths" Value="\F305ol0\Word组件.bot"/>
<ExtendedAttribute Name="Manifest" Value="\F305ol0\Manifest.xml"/>
<ExtendedAttribute Name="nodeType" Value="ComponentNode"/>
<ExtendedAttribute Name="OrderNumber" Value="5"/>
<ExtendedAttribute Name="Author" Value="Peraglobal,Inc."/>
<ExtendedAttribute Name="Created" Value="2015-02-09 17:16:09"/>
<ExtendedAttribute Name="Version" Value="1.0"/>
</ExtendedAttributes>
</Activity>
</Activities>
<Transitions>
</Transitions>
<ExtendedAttributes>
<ExtendedAttribute Name="StartOfWorkflow" Value="F5r33v9"/>
<ExtendedAttribute Name="EndOfWorkflow" Value="F5r33v9"/>
<ExtendedAttribute Name="StartOfWorkflow" Value="F305ol0"/>
<ExtendedAttribute Name="EndOfWorkflow" Value="F305ol0"/>
<ExtendedAttribute Name="processType" Value="static"/>
<ExtendedAttribute Name="robotRunMode" Value="0"/>
<ExtendedAttribute Name="nodeType" Value="ParallelNode"/>
<ExtendedAttribute Name="OrderNumber" Value="1"/>
<ExtendedAttribute Name="Author" Value="Peraglobal,Inc."/>
<ExtendedAttribute Name="Created" Value="2015-02-09 17:29:51"/>
<ExtendedAttribute Name="Version" Value="1.0"/>
</ExtendedAttributes>
</WorkflowProcess>

<WorkflowProcess AccessLevel="PUBLIC" Id="subprocess5r33v9" Name="串行">
<ProcessHeader DurationUnit="D">
<Author><![CDATA[Peraglobal,Inc.]]></Author>
<Created><![CDATA[2015-02-09 17:30:01]]></Created>
<Description><![CDATA[串行]]></Description>
<Version><![CDATA[1.0]]></Version>
</ProcessHeader>
<RedefinableHeader PublicationStatus="UNDER_TEST"/>
<Activities>
<Activity Id="Fg88c47" Name="UG">
<Implementation><No/></Implementation>
<Performer>default_participant_id</Performer>
<Author><![CDATA[Peraglobal,Inc.]]></Author>
<Created><![CDATA[2015-01-26 15:16:50]]></Created>
<Description><![CDATA[UG实体组件]]></Description>
<Version><![CDATA[1.0]]></Version>
<StartMode><Automatic/></StartMode>
<FinishMode><Automatic/></FinishMode>
<ExtendedAttributes>
<ExtendedAttribute Name="ComponentId" Value="d586557f-fa1e-44e7-92d8-fd6c9bd3d87e"/>
<ExtendedAttribute Name="ComponentType" Value="UG"/>
<ExtendedAttribute Name="robotType" Value="6A47DE44-2A0E-402D-9F3A-0E4806C31498"/>
<ExtendedAttribute Name="ComponentFileNames" Value="UG.bot"/>
<ExtendedAttribute Name="ComponentFileStorePaths" Value="\Fg88c47\UG.bot"/>
<ExtendedAttribute Name="Manifest" Value="\Fg88c47\Manifest.xml"/>
<ExtendedAttribute Name="nodeType" Value="ComponentNode"/>
<ExtendedAttribute Name="OrderNumber" Value="3"/>
<ExtendedAttribute Name="Author" Value="Peraglobal,Inc."/>
<ExtendedAttribute Name="Created" Value="2015-01-26 15:16:50"/>
<ExtendedAttribute Name="Version" Value="1.0"/>
</ExtendedAttributes>
</Activity>
<Activity Id="F3tgdp1" Name="数据解析组件">
<Implementation><No/></Implementation>
<Performer>default_participant_id</Performer>
<Author><![CDATA[Peraglobal,Inc.]]></Author>
<Created><![CDATA[2015-01-26 15:01:34]]></Created>
<Description><![CDATA[数据解析组件]]></Description>
<Version><![CDATA[1.0]]></Version>
<StartMode><Automatic/></StartMode>
<FinishMode><Automatic/></FinishMode>
<ExtendedAttributes>
<ExtendedAttribute Name="ComponentId" Value="977cc3e9-104f-45a1-a0df-3e3e9e4bd779"/>
<ExtendedAttribute Name="ComponentType" Value="数据解析组件"/>
<ExtendedAttribute Name="robotType" Value="69F08DE1-A7FC-470D-A2A2-A19626A22041"/>
<ExtendedAttribute Name="ComponentFileNames" Value="数据解析组件.bot"/>
<ExtendedAttribute Name="ComponentFileStorePaths" Value="\F3tgdp1\数据解析组件.bot"/>
<ExtendedAttribute Name="Manifest" Value="\F3tgdp1\Manifest.xml"/>
<ExtendedAttribute Name="nodeType" Value="ComponentNode"/>
<ExtendedAttribute Name="OrderNumber" Value="4"/>
<ExtendedAttribute Name="Author" Value="Peraglobal,Inc."/>
<ExtendedAttribute Name="Created" Value="2015-01-26 15:01:34"/>
<ExtendedAttribute Name="Version" Value="1.0"/>
</ExtendedAttributes>
</Activity>
</Activities>
<Transitions>
<Transition From="Fg88c47" Id="TRFg88c47F3tgdp1" Name="UG_数据解析组件" To="F3tgdp1">
<ExtendedAttributes>
<ExtendedAttribute Name="RoutingType" Value="NOROUTING"/>
<ExtendedAttribute Name="Viewtext" Value="Fg88c47F3tgdp1;0"/>
</ExtendedAttributes>
</Transition>
</Transitions>
<ExtendedAttributes>
<ExtendedAttribute Name="StartOfWorkflow" Value="Fg88c47"/>
<ExtendedAttribute Name="EndOfWorkflow" Value="F3tgdp1"/>
<ExtendedAttribute Name="processType" Value="static"/>
<ExtendedAttribute Name="robotRunMode" Value="0"/>
<ExtendedAttribute Name="nodeType" Value="SequenceNode"/>
<ExtendedAttribute Name="OrderNumber" Value="2"/>
<ExtendedAttribute Name="Author" Value="Peraglobal,Inc."/>
<ExtendedAttribute Name="Created" Value="2015-02-09 17:30:01"/>
<ExtendedAttribute Name="Version" Value="1.0"/>
</ExtendedAttributes>
</WorkflowProcess>
</WorkflowProcesses>
<ExtendedAttributes>
</ExtendedAttributes>
</Package>PK     z:F���q  q    Fg88c47/Manifest.xmlUT ���T���T���T﻿<?xml version="1.0" encoding="utf-8"?>
<Manifest xmlns="">
  <Component RobotName="UG" RobotType="6A47DE44-2A0E-402D-9F3A-0E4806C31498">
    <Properties>
      <Property name="ID">d586557f-fa1e-44e7-92d8-fd6c9bd3d87e</Property>
      <Property name="InstanceID">0fe0b733-7b83-4142-922d-99164d39e312</Property>
      <Property name="Version">1.0</Property>
      <Property name="CreateTime">2015-01-26 15:16:50</Property>
      <Property name="ModifyTime">2015-01-26 15:16:51</Property>
      <Property name="Author">Peraglobal,Inc.</Property>
      <Property name="Description">UG实体组件</Property>
      <Property name="FormType">NullForm</Property>
    </Properties>
    <Parameters>
    </Parameters>
    <Forms>
    </Forms>
    <Reference>
    </Reference>
    <RunTime>
      <RunTimeItem>
        <ID>f55c7fab-a905-4d7b-9989-c080ce5754ca</ID>
        <Name>IsFilePara</Name>
        <Content>False</Content>
        <Description>
        </Description>
      </RunTimeItem>
      <RunTimeItem>
        <ID>c7b2b80d-aae3-4829-9a2a-82f02bc2be9d</ID>
        <Name>FlagIsProduct</Name>
        <Content>False</Content>
        <Description>
        </Description>
      </RunTimeItem>
      <RunTimeItem>
        <ID>dded219c-d6f8-4e60-8457-82977742d725</ID>
        <Name>FileParameterConfig</Name>
        <Content>&lt;?xml version="1.0"?&gt;
&lt;ArrayOfFileConfigBase xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:xsd="http://www.w3.org/2001/XMLSchema" /&gt;</Content>
        <Description>
        </Description>
      </RunTimeItem>
    </RunTime>
  </Component>
</Manifest>PK     z:F�-��  �    Fg88c47/UG.botUT ���T~�T~�TPK    z:F��纃  q     Manifest.xml�U�n�0���J��(Qrl��4H��+%^9�0$����A�~B�.AџIѱ�P���1��@�sx��}�����s����G(��Ȼ�jd@2��]4U1��Yp|ԹyC��W]�4i�~�M�re�a��D]tw���v>���1>8g�9ǌ���v�s��o[���v��,&P�����F��P �u�XX��}*=K7�CiK�C�\[�y�%���ܶ1=3�QmI%�}�e����h���^�@��Ax���6� �X&��a9m�m;M.����!��Co���P�qZ�"}5ʣV� ��L&jQ���ϯ_��������[��(3�":�i��hO� ��t��+��M�>U�mϟ���=���s3�uC�pK�drE�A�8�E��O�$��x>��G"p��"�1u����&��&)���qM��\�KEZ�=^�݈�����s~��ߤ���4��B��
��/���	#�/_�i����#��H�weI	�Z~��{��K���u}�sF%�΋eՃڬ��:NƇ�;I����zv2V��G�a�,��m\�.�^�
��j��J��^�I�4g�Ykf��rlRB,���w�=d'�gmT��*d�u���N�m����0�G�PK    z:Fʉl   �      ParametersManifest.xml�˽�0 ���whn�Wt#��]����OhB�6�&V��+���jb	v�%d�@]�O�]����MB�#�ژ�l	]�c��R��i�jL�����t��b}���}��(�VPK    z:F�
5X  )     UG.flexproj�T�n�0�G��� Ѹ[G�P�i]�cW�qӓ�`Ǒ}<�!���W�i���������������*�a+ �%jγE/��6��q��Yt��H�L���|W!3��1G�I�A2J�heT�a�$�������,sz�j�2��Y�S���H��N�'Y$�j����}~c��������I��o[���Q�s�<鴇�Q�;::��;�7�?"���˜�,���>�[�9�;"�/w����#�	���"�;�j_�a���[��[e��ND=��?Z�-NW9��%D�^{ƅRx�$��%_�#��T�c@���J�P��y�WהzY���f7r\�NУ�6��y'	X~c�>��3a�����H����`��&OH�h�Uf�5��݀Q+Q�n 㲇K�,��kj��Vt|��W)63�R5tg���9O�ڼ�x�׹��>P�4:�u�}��1�3���]'��Z����Q��k��������Ϯ�ְ᫈'�#�Vr�&O�u�چvhkǍ���ו`�\�[g¸"~�{� ���rC��g�ǽ�����h1�'�9A�;OgQ�L�D�9�,�)������T=��PK     z:F            
   Reference/PK     z:F��纃  q                   Manifest.xmlPK     z:Fʉl   �                �  ParametersManifest.xmlPK     z:F�
5X  )               M  UG.flexprojPK      z:F            
            �  Reference/PK      �   �    PK     3x:F�^>�  �    F3tgdp1/Manifest.xmlUT R��TR��TR��T﻿<?xml version="1.0" encoding="utf-8"?>
<Manifest xmlns="">
  <Component RobotName="数据解析组件" RobotType="69F08DE1-A7FC-470D-A2A2-A19626A22041">
    <Properties>
      <Property name="ID">977cc3e9-104f-45a1-a0df-3e3e9e4bd779</Property>
      <Property name="InstanceID">9f0b640f-d2e2-486b-872d-fff643bcaa0e</Property>
      <Property name="Version">1.0</Property>
      <Property name="CreateTime">2015-01-26 15:01:34</Property>
      <Property name="ModifyTime">2015-01-26 15:01:35</Property>
      <Property name="Author">Peraglobal,Inc.</Property>
      <Property name="Description">数据解析组件</Property>
      <Property name="FormType">NullForm</Property>
    </Properties>
    <Parameters>
    </Parameters>
    <Forms>
    </Forms>
    <Reference>
    </Reference>
    <RunTime>
      <RunTimeItem>
        <ID>bed4c221-f69c-4d49-a393-bdb633e41a17</ID>
        <Name>Action</Name>
        <Content>&lt;?xml version="1.0" encoding="utf-16"?&gt;&lt;ArrayOfAbstracAction xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:xsd="http://www.w3.org/2001/XMLSchema" /&gt;</Content>
        <Description>
        </Description>
      </RunTimeItem>
      <RunTimeItem>
        <ID>b1bd8bf3-398c-4e59-8a5e-527a96b1672e</ID>
        <Name>Mapping</Name>
        <Content>&lt;?xml version="1.0" encoding="utf-16"?&gt;&lt;ArrayOfMappingInfo xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:xsd="http://www.w3.org/2001/XMLSchema" /&gt;</Content>
        <Description>
        </Description>
      </RunTimeItem>
      <RunTimeItem>
        <ID>84392bef-ac03-42ee-a4a5-74482cf69203</ID>
        <Name>FileParameterConfig</Name>
        <Content>&lt;?xml version="1.0"?&gt;
&lt;ArrayOfFileConfigBase xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:xsd="http://www.w3.org/2001/XMLSchema" /&gt;</Content>
        <Description>
        </Description>
      </RunTimeItem>
    </RunTime>
  </Component>
</Manifest>PK     2x:F��Ym  m    F3tgdp1/���ݽ������.botUT P��T~�T~�TPK    3x:F�^>�  �     Manifest.xmlݕ=o�0�� ��L�ERԗc+P�0P�A])���%C��x�Z�K�.���d�)�n���8AT�K3�{w/ɇ<�������xd���L�h� �8O�l�FS%��N�Ã�@d��R�>+�i�0Z�|<�3Ȕq�G�:ch��_o�}�������?���������D��G��3�C����%]����sB��K{��Y�O�P)�+e�͍l�\���u��S�%涠X�Db�<J\�o������R�,���$�É�	���D�sY�����X5,_-٢@��Q�)@(�HǀF��	��1��$�i�}yr~��]�!��˼@�b8�#1z���F��.�q�N����Ϡ�C//���轟NG�*�kZ�G�t�nW���h_�ܶ�[�9H(@��&���O3un����B\��nA�c�(��c�p˷p�D�e���-S�U��q��eV�n��gJYp4R�N,u���PW�aQ��F�*D��_�p�L��R�I�4g�Ycf5�bh2B��z��e|	c���D�MW�p2�j-s��ݣ�<�]ټ���Ƶ��(�"ia��4x�}�	��\�;u\w���D���W��L揘��-�E ����9����{,�S��u'�^:�͠�]����`A��`�ye��z*J���o4W��í>es�+ PK    2x:F;���  �     ���ݽ������.flexproj�U=��@��+) or߇�.w����"�k6�$���Z��#9DG�DCKCA��h��Ϡ����8��N�S�T�yoޛ����x;�P�SP�˨��ݚC 
�G㆓�Qu������zJ������B������
�n8'��O(��	�L�!��rd�@�t� d��z�p1�+�ڪC�0b�0}��`P��b��i���+��i�����7[�����n�Z�o��k�����v�Um�nwV�k�����[��r�LKF#>N3��Ӑ�YG������BR��o� {t��̌�
��l�$3�����牉ӟ��w&���l�R���Y ���o������Ӈ_��~��h����j�@L�:�Dȓ��x*���̰S:јGXY��dV�Q�x��E^����8h����k��m�&��fq77ꆱ�"�.ycB�}L�.���U ��PxQFIQ�3�-���I���	h�la��B��H����{<x��)���e�ex�
�l���]ެ[&��vy̳!(F�����U;7۷�y�#=fN���g�G��%ΐ�i8�'��U��X-�f���{�c�C~�8E��?�x���rN��ϴ�[=���h����g�@��^N�I7
D2���E|ڸ�mp�딓��PK     3x:F            
   Reference/PK     3x:F�^>�  �                   Manifest.xmlPK     2x:F;���  �               �  ���ݽ������.flexprojPK      3x:F            
            z  Reference/PK      �   �    PK     �IF�~��  �    F305ol0/Manifest.xmlUT �z�T�z�T�z�T﻿<?xml version="1.0" encoding="utf-8"?>
<Manifest xmlns="">
  <Component RobotName="Word组件" RobotType="WORD2B29-2FB6-4A5A-9EDD-8F42A1578EA2">
    <Properties>
      <Property name="ID">a2cdcf9e-1027-4908-84a3-47f2e575cbc9</Property>
      <Property name="InstanceID">4649e697-f1db-4bc9-b4a7-963ff19fa194</Property>
      <Property name="Version">1.0</Property>
      <Property name="CreateTime">2015-02-09 17:16:09</Property>
      <Property name="ModifyTime">2015-02-09 17:16:11</Property>
      <Property name="Author">Peraglobal,Inc.</Property>
      <Property name="Description">Word组件</Property>
      <Property name="FormType">NullForm</Property>
    </Properties>
    <Parameters>
    </Parameters>
    <Forms>
    </Forms>
    <Reference>
    </Reference>
    <RunTime>
      <RunTimeItem>
        <ID>5d0439b2-f845-40db-8ca8-67ba187d3735</ID>
        <Name>FileParameterConfig</Name>
        <Content>&lt;?xml version="1.0"?&gt;
&lt;ArrayOfFileConfigBase xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:xsd="http://www.w3.org/2001/XMLSchema" /&gt;</Content>
        <Description>
        </Description>
      </RunTimeItem>
    </RunTime>
  </Component>
</Manifest>PK     �IF���  �    F305ol0/Word���.botUT �z�T~�T~�TPK    �IF�~�%  �     Manifest.xml�����0��+�;D>�&qpH  ��TvWt���$6DJl䘲��L�p��T걯P� a�V��|���d<�����ȍT����:0(OD��� l���7�����R:�� 44�`"����+c!b�IA�������?�_��/�u���=�}hO�=�G��Q�)�G�q���]�j�g)�T���GҰ����E $v�&̧Y��oy�ä��l�N'~`���[�R�����O{�Jc���1q���2�|F��[X~�{
B���I��/YAAh[ȁ�-�@n��V���Kc�wj�0ڨ�� |��,s��ӌ'�ʈ����������PN�,�x�7y^EW�h��v!R˕��9�Un���hA�T�����,6\7�6`�hq�G<�B'�p׏m�<�@l������i��:��/dժ��,��'��l���e��JoXx����u�-���Mu8���XeZ{�II����� ��Z�Ms��v�ݎ�KӶ,d~����hA`v�pV���aV5����/��o��^u�a:���{S�I��Q
�PK    �IF�6�p  T     Word���.flexproj�T�n�@�#�+) oKRH�㪭ݒCK�F������]kڤ��ĥ^�#�����Ih��w��ٙ�?�?��Y��HEz�����'"�|:�κo+|�,8��3$��`���K�e�j�k]��X%���4�B�L���q
�D�jb(K񛵵��"ȈazL��%�)}�D�J�z�/�)J��\����׽�h�7�7��n���ף����8~��moDq��-�K1�fW��N�$�ց�)���u^�\q���u:�#��i�W�M^��L��&��/��o��.��х��ya<� �g�8B�TAO�L_�u�#�˞���6��U������A(]Ac>�v�U$��� ��6����;I$-�_�ucu�� �c0�$|˹C���/�Fy� ��;�_�G���6� �V�A�nh)X�� �x��P~Jy*.k�ې ��re2#��ض�~�#�|1E�qx�t�����	��������gG�����m�����]Tm�B���#���	�g��,���+��<�؛
���9[6�����3�Y�;7���9��~%q�'�����_��p�e�z(8����U�HC��ʖ�h�fRz�����K�!��Yj���/PK     �IF            
   Reference/PK     �IF�~�%  �                   Manifest.xmlPK     �IF�6�p  T               O  Word���.flexprojPK      �IF            
            �  Reference/PK      �       PK     ˋIFu�8��$  �$  	 	               main.xpdlUT -~�TPK     z:F���q  q   	           (%  Fg88c47/Manifest.xmlUT ���TPK     z:F�-��  �   	           �+  Fg88c47/UG.botUT ���TPK     3x:F�^>�  �   	           3  F3tgdp1/Manifest.xmlUT R��TPK     2x:F��Ym  m   	           ";  F3tgdp1/���ݽ������.botUT P��TPK     �IF�~��  �   	           �A  F305ol0/Manifest.xmlUT �z�TPK     �IF���  �   	           �F  F305ol0/Word���.botUT �z�TPK         M    